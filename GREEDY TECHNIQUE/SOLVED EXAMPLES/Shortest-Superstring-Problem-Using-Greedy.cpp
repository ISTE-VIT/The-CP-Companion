#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
 
// Function to calculate the maximum overlap in two given strings
int findOverlappingPair(string s1, string s2, string &str)
{
    // `max` will store the maximum overlap, i.e., the maximum length
    // of the matching prefix and suffix
    int max = INT_MIN;
    int m = s1.length();
    int n = s2.length();
 
    // check if the suffix of `s1` matches with the prefix of `s2`
    for (int i = 1; i <= min(m, n); i++)
    {
        // compare the last `i` characters in `s1` with the first
        // `i` characters in `s2`
        if (s1.compare(m - i, i, s2, 0, i) == 0)
        {
            if (max < i)
            {
                // update `max` and `str`
                max = i;
                str = s1 + s2.substr(i);
            }
        }
    }
 
    // check if the prefix of `s1` matches with the suffix of `s2`
    for (int i = 1; i <= min(m, n); i++)
    {
        // compare the first `i` characters in `s1` with the last
        // `i` characters in `s2`
        if (s1.compare(0, i, s2, n - i, i) == 0)
        {
            if (max < i)
            {
                // update `max` and `str`
                max = i;
                str = s2 + s1.substr(i);
            }
        }
    }
 
    return max;
}
 
// Function to calculate the smallest string that contains
// each string in a given set as a substring
string findShortestSuperstring(vector<string> arr)    // no-ref, no-const
{
    int n = arr.size();
 
    // run `n-1` times to consider every pair
    while (n != 1)
    {
        // to keep track of the maximum overlap
        int max = INT_MIN;
 
        // to store an array index of strings involved in the maximum overlap
        int p, q;
 
        // keep track of the resultant string after maximum overlap
        string res_str;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string str;
 
                // `r` will store the maximum length of the matching prefix, and
                // suffix `str` will store the resultant string after maximum overlap
                // of `arr[i]` and `arr[j]` if any
                int r = findOverlappingPair(arr[i], arr[j], str);
 
                // check for the maximum overlap
                if (max < r)
                {
                    max = r;
                    res_str.assign(str);
                    p = i, q = j;
                }
            }
        }
 
        // ignore the last element in the next cycle
        n--;
 
        // if there is no overlap, append the value of `arr[n]` to `arr[0]`
        if (max == INT_MIN) {
            arr[0] += arr[n];
        }
        else {
            // copy the resultant string to index `p`
            arr[p] = res_str;
 
            // copy the string at last index to index `q`
            arr[q] = arr[n];
        }
    }
 
    return arr[0];
}
 
int main()
{
    vector<string> arr = { "CATGC", "CTAAGT", "GCTA", "TTCA", "ATGCATC" };
 
    cout << "The shortest superstring is " << findShortestSuperstring(arr);
 
    return 0;
}

// Input:  A set of strings S
 
// T = S
// while |T| > 1 do
//     Let a and b be the most overlapping strings of T
//     Replace a and b with the string obtained by overlapping and b
 
// T contains the shortest superstring of S

