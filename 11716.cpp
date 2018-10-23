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
int main()
{
    ll t,n,l;
    string st;
    scanll(t);
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        getline(cin,st);
        l=st.length();
        n=sqrt(l);
        if(n*n!=l)
            printf("INVALID\n");
        else
        {
            for(ll i=0;i<n;i++)
            {
                ll j=i;
                while(j<=l-1)
                {
                    printf("%c",st[j]);
                    j+=n;
                }
            }
            printf("\n");
        }
    }
}

