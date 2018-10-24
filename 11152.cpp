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

    ll a,b,c,d;
    double rad1,rad2,p,ar1,ar2,ar3;

    while(scanf("%lld %lld %lld",&a,&b,&c)==3)
    {
        d= (a+b+c)*(a+b-c)*(b+c-a)*(c+a-b);

        rad1=(a*b*c*1.0)/sqrt(d);

        ar2=pi*rad1*rad1;


        p=(a+b+c)/(2*1.0);

        ar1= sqrt(p*(p-a)*(p-b)*(p-c));

        rad2=(2.0*ar1)/(a+b+c);

        ar3=pi*rad2*rad2;

        ar2=ar2-ar1;

        ar1=ar1-ar3;

        printf("%.4lf %.4lf %.4lf\n",ar2,ar1,ar3);
    }
}

