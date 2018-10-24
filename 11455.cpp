#include<bits/stdc++.h>
#include<algorithm>
#include<fstream>

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

    ll t;
    scanll(t);
    ll a,b,c,d;




    for(int i=0;i<t;i++)
    {
        scanll(a);
        scanll(b);
        scanll(c);
        scanll(d);

        if(a==b &&b==c && c==d)
            printf("square\n");

        else if((a==c && b==d) ||(a==b && c==d)||(a==d && c==b))
            printf("rectangle\n");



        else
        {
            if(a+b+c>d &&a+b+d>c &&a+c+d>b &&b+c+d>a )
                printf("quadrangle\n");
            else printf("banana\n");

        }

    }




}

