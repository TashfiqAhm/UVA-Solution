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
    scan(t);
    ll k;

    for(int i=0;i<t;i++)
    {
        scanll(k);
        double tax=0;
        ll p;
        int y;
        if(k<=180000)
            y=1;
        else y=0;

        if(k>1180000)
        {
            p=k-1180000;
            tax=tax+p*.25;
            k=1180000;
        }

        if(k>880000)
        {
            p=k-880000;
            tax=tax+p*.20;
            k=880000;
        }

        if(k>480000)
        {
            p=k-480000;
            tax=tax+p*.15;
            k=480000;
        }

        if(k>180000)
        {
            p=k-180000;
            tax=tax+p*.10;
            k=180000;
        }

        if(y==0 && tax<2000)
            tax=2000;

        tax=ceil(tax);
        printf("Case %d: %.0lf\n",i+1,tax);






    }


}

