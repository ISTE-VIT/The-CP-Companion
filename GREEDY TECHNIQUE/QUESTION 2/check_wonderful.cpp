#include <iostream>

using namespace std;

int main()
{
    string s;
    int check = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '8')
        {
            check++;
            if (s[i + 1] == '9')
            {
                check++;
                i++;
                if (s[i + 1] == '9')
                {
                    check++;
                    i++;
                    continue;
                }
            }
            else
                continue;
        }
        else
            break;
    }
    if (check == s.size())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}