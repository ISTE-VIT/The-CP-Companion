/* WATER CONNECTION PROBLEM

Every house in the colony has at most one pipe going into it and at most one pipe going out of it. Tanks and taps are to be installed 
in a manner such that every house with one outgoing pipe but no incoming pipe gets a tank installed on its roof and every house with 
only an incoming pipe and no outgoing pipe gets a tap.
Given two integers n and p denoting the number of houses and the number of pipes. The connections of pipe among the houses contain 
three input values: ai, bi, di denoting the pipe of diameter di from house ai to house bi. Find the efficient way for the construction 
of the network of pipes.

The output will contain the number of pairs of tanks and taps t installed in first line and the next t lines contain three integers: 
house number of tank, house number of tap and the minimum diameter of pipe between them.

Input:
n = 9, p = 6
a[] = {7,5,4,2,9,3}
b[] = {4,9,6,8,7,1}
d[] = {98,72,10,22,17,66} 

Output: 
3
2 8 22
3 1 66
5 6 10

Explanation:
Connected components are 
3->1, 5->9->7->4->6 and 2->8.
Therefore, our answer is 3 
followed by 2 8 22, 3 1 66, 5 6 10.

code by iamkakashi
*/
#include <bits/stdc++.h>
using namespace std;


int dfs(int &ans,int i,int going_to[],int dia[]){
    if(going_to[i]==0){
        return i;
    }
    if(dia[i]<ans){
        ans=dia[i];
    }
    return dfs(ans,going_to[i],going_to,dia);
}
vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d){
        
    vector<vector<int>>v;
    int going_to[n+1];
    int coming_from[n+1];
    int dia[n+1];
    memset(going_to,0,sizeof(going_to));
    memset(coming_from,0,sizeof(coming_from));
    memset(dia,0,sizeof(dia));
    
    for(int i=0;i<p;i++){
        going_to[a[i]]=b[i];
        coming_from[b[i]]=a[i];
        dia[a[i]]=d[i];
    }
    for(int i=1;i<=n;i++){
        if(coming_from[i]==0 && going_to[i]!=0){
            int ans=INT_MAX;
            int ind=dfs(ans,i,going_to,dia);
            vector<int>faaltu;
            faaltu.push_back(i);
            faaltu.push_back(ind);
            faaltu.push_back(ans);
            v.push_back(faaltu);
        }
    }
    return v;
}
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }

        vector<vector<int>> answer = solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}  