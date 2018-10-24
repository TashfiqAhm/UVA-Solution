#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(-1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d",a)
#define printll(a) printf("%lld",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    int t,t1,t2,f,a,ct1,ct2,ct3;

    scan(t);
    for(int i=0;i<t;i++)
    {
        scan(t1);
        scan(t2);
        scan(f);
        scan(a);
        scan(ct1);
        scan(ct2);
        scan(ct3);

        double ct = ct1+ct2+ct3 -min(ct1,min(ct2,ct3));
        ct=ct/2.0;

        double res = t1 +t2+f+a+ct;

        if(res>=90)
            printf("Case %d: A\n",i+1);

        else if(res>=80)
            printf("Case %d: B\n",i+1);

        else if(res>=70)
            printf("Case %d: C\n",i+1);

        else if(res>=60)
            printf("Case %d: D\n",i+1);

        else if(res<60)
            printf("Case %d: F\n",i+1);
    }



}

