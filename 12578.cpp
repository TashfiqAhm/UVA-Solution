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
    int l;
    double w,r,ar1,ar2;
    for(int i=0;i<t;i++)
    {
        scan(l);
        w=(6.0*l)/10.0;
        r=(2.0*l)/10.0;

        ar1= pi*r*r;
        ar2=l*w-ar1;

        printf("%.2lf %.2lf\n",ar1,ar2);


    }


}

