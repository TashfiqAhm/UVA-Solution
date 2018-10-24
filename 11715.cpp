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
    double u,v,a,s,t;
    int ac;

    int i=0;
    while(true)
    {
        scanf("%d",&ac);
        if(ac==0)
            break;

        if(ac==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            s=t*(v+u)/2.00;
            a= (v-u)/(t*1.00);
            printf("Case %d: %.3lf %.3lf\n",i+1,s,a);
        }
        if(ac==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            s= (v*v-u*u)/(2.00*a);
            t=(v-u)/(a*1.00);
            printf("Case %d: %.3lf %.3lf\n",i+1,s,t);


        }

        if(ac==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=u*u +2*a*s;
            v=sqrt(v);
            t=(v-u)/(a*1.00);
            printf("Case %d: %.3lf %.3lf\n",i+1,v,t);

        }

        if(ac==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=v*v-2*a*s;
            u=sqrt(u);
            t=(v-u)/(a*1.00);
            printf("Case %d: %.3lf %.3lf\n",i+1,u,t);

        }
        i++;

    }



}

