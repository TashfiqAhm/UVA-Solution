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
    ll t,n,m,res;
    scanll(t);

    for(int i=0;i<t;i++)
    {
        scanll(n);
        scanll(m);
        n-=2;
        m-=2;

        if(n%3==0)
            n=n/3;
            else n=n/3+1;

        if(m%3==0)
            m=m/3;
            else m=m/3+1;


        res= n*m;

        printll(res);



    }



}

