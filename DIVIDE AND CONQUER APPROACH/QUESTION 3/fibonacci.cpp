#include<bits/stdc++.h>
#define lld long long
#define lim (lld)1e9+7
using namespace std;

const lld mod=lim; //used modulus to avoid overflow 
const int k=2;
typedef vector<vector<lld>> matrix;

matrix mul(matrix a, matrix b)
{
	matrix c(k+1,vector<lld>(k+1));

	for(lld i=1;i<=2;i++)
		for(lld j=1;j<=2;j++)
			for(lld t=1;t<=2;t++)
			{	
				c[i][j] += (a[i][t]*b[t][j]);
				c[i][j] %= mod;
			}

	return c;
}

matrix init()
{
	matrix a(k+1,vector<lld>(k+1));

	for(lld i=1;i<=k;i++)
		a[i][i] = 1;

	return a;
}

matrix pow(matrix a,lld p)
{
	matrix res = init();

	while(p>0)
	{
		if(p&1)
			res = mul(res,a);

		p/=2;

		a = mul(a,a);
	}

	return res;
}

int main()
{
	lld n,total=0;
	cin>>n;

	if(n>0)
	{
		matrix ans(k+1,vector<lld>(k+1));
	
		ans[1][1] = 1;
		ans[1][2] = 1;
		ans[2][1] = 1;
		ans[2][2] = 0;
	
		matrix res = pow(ans,n-1);
		total = (res[1][1]+res[1][0])%mod;
	}

	cout<<total<<endl;
}