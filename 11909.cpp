
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
double pi= acos(-1.0);
int main()
{
    double l,w,h,th;
    double pr,res;

    while(scanf("%lf",&l)!=EOF)
    {
        scanf("%lf %lf %lf",&w,&h,&th);
        pr=l*w*h;

        double  q=l*tan((th*pi)/180.0);

        if(q<=h)
        {
            double sip = .5*l*q*w;

            printf("%.3lf mL\n",pr-sip);
        }

        else
        {
            double q = h*tan(((90-th)*pi)/180.0);

            double sip = .5*h*q*w;

            printf("%.3lf mL\n",sip);
        }



        /*printf("l= %lf\n",l);
        printf("w= %lf\n",w);
        printf("h= %lf\n",h);
        printf("th= %lf\n",th);
        printf("q= %lf\n",q);
        printf("sip= %lf\n",sip);
        printf("pr= %lf\n",pr);*/




    }





}
