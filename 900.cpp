#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(-1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;

int dp[100];
ll fib(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;

    if(n==1)
        return 3;

    if(dp[n]!=0)
        return dp[n];

    else return dp[n]= fib(n-1)+fib(n-2);

}

int main()
{
    int n;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(;;)
    {
        scan(n);
        if(n==0)
            break;

        ll res=fib(n);

        printll(res);



    }


}

