#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos-1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;

stack<ll>st;

int main()
{
    ll t;
    ll n;
    ll x;
    scanll(t);

    for(int i=0;i<t;i++)
    {
        scanll(n);


        printf("Case %d:",i+1);

        for(int j=1;j*j<n;j++)
        {
            x=n-j*j;

            if(x%j==0)
            {
                st.push(x);
            }
        }
        while(!st.empty())
        {
            ll y=st.top();
            st.pop();
            printf(" %lld",y);
        }
        printf("\n");
    }


}
