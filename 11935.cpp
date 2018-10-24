
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

    ll mi=0,mi2=0;
    ll f=0,m=0,nol=0;
    string s;
    double res=0;
    double tank=0;

    for(;;)
    {
        scanll(mi);

        cin>>s;

        ll dif=mi-mi2;
        res=res + +dif*nol;
        res=res + (dif*f)/100.0 ;

        if(!s.compare("Fuel"))
        {
            cin>>s;

            scanll(f);
            if(f==0)
                break;

        }

        if(!s.compare("Leak"))
        {


            nol++;

        }
        if(!s.compare("Mechanic"))
        {

            nol=0;
        }

        if(!s.compare("Gas"))
        {
            cin>>s;
            tank=max(tank,res);

            res=0;

        }

        if(!s.compare("Goal"))
        {

            tank=max(tank,res);

            printf("%.3lf\n",tank);

            mi=0;
            mi2=0;
            f=0;
            nol=0;
            res=0;
            tank=0;

        }
        mi2=mi;

    }

}
