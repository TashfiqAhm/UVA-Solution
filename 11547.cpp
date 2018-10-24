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



int main()
{
    int t;
    int n;
    scan(t);
    for(int i=0;i<t;i++)
    {
        scan(n);

        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;

        n=n/10;
        n=n%10;

        if(n<0)
            n=-n;

        print(n);
    }


}

