#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;

//int ar[100000000];
ll dp[100000000];
ll dp2[100000000];

ll dp1(ll n)
{
    if(dp[n]!=0)
        return dp[n];

    else
    {
        dp[n]=dp1(n-1)+dp1(n-2);
        dp2[n]=dp2[n-1]+dp[n];
        return dp[n];
    }

}

int main()
{
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    dp2[0]=1;
    dp2[1]=2;
    dp2[2]=4;
    int n;
    while(1)
    {
        scan(n);
        if(n==-1)
            break;
        dp1(n);
        printf("%lld %lld\n",dp2[n]-dp[n],dp2[n]);
    }
}

