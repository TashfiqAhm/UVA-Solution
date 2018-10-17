
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n;
long long strong,weak,nos,total,ar1,ar2,s1,s2;

struct point
{
    int x;
    int y;

} f1,f2,f3,f4,g1,g2,g3,g4;

int main()
{
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d %d",&f1.x,&f1.y,&f3.x,&f3.y);

        scanf("%d %d %d %d",&g1.x,&g1.y,&g3.x,&g3.y);


        ar1 = abs(f1.x - f3.x) * abs(f1.y-f3.y) ;
        ar2 = abs(g1.x - g3.x) * abs(g1.y-g3.y) ;

        total = ar1+ar2;



        f2.x= f3.x;
        f2.y=f1.y;

        f4.x= f1.x;
        f4.y=f3.y;

        g2.x=g3.x;
        g2.y=g1.y;

        g4.x=g1.x;
        g4.y=g3.y;


        if( (f4.x>g2.x || g4.x>f2.x) || ( f4.y <g2.y || g4.y <f2.y ) )
            strong = 0;

        else
        {
            s1 = min(f3.x,g3.x) - max(f1.x,g1.x);
            s2 = min(f3.y,g3.y) - max(f1.y,g1.y) ;

            strong = s1*s2;
        }

        weak = total - strong-strong;
        nos = 100*100 - weak - strong;



        printf("Night %d: %lld %lld %lld\n",i+1,strong,weak,nos);












    }
    return 0;
}
