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

int ar[100];

int main()
{
    int n;
    int t;
    scan(t);
    for(int i=0;i<t;i++)
    {
        scan(n);
        for(int j=1;j<=n;j++)
            scan(ar[j]);

         if(n%2!=0)
         printf("Case %d: %d\n",i+1,ar[n/2 +1]);
         else
            printf("Case %d: %d\n",i+1,ar[n/2]);

    }


}

