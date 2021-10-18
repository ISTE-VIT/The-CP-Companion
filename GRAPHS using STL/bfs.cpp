#include<bits/stdc++.h>
#include<queue>
using namespace std ;
int main()
{
queue <int > q ;

int g[5][5]= { { 0, 1, 1, 0, 0 },//0 
               { 1, 0, 0, 1, 0 },//1 
               { 1, 0, 0, 1, 0 },//2 
               { 0, 1, 1, 0, 1 }, //3
               { 0, 0, 0, 0, 1 }}; //4
			   //0  1  2  3  4
			   
vector <bool> visited(5,false) ;

q.push(1) ;
visited[1] = true ;

while(!q.empty())
{
    int k=q.front() ;
    q.pop() ;
    for(int i =0 ;i <5 ;i++)
    {
        if(visited[i] == false && g[k][i]!=0)
        {
        q.push(i) ;
        visited[i]=true ;
	    }
	}
    cout<<k <<" " ;
}

}