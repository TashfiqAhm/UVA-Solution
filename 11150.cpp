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
    int n;
    int r1,r2,r3;
    while(scan(n)!=EOF)
    {
        r1=0;
        r2=0;
        r3=0;
        int a=n;
        int rem=0;
        while(a!=0)
        {
            r1=r1+a;
            rem=rem+a;
            a=rem/3;
            rem=rem%3;
        }

        a=n;
        rem=1;
        while(a!=0)
        {
            r2=r2+a;
            rem=rem+a;
            a=rem/3;
            rem=rem%3;
        }
        if(rem==0)
            r2=0;

        a=n;
        rem=2;
        while(a!=0)
        {
            r3=r3+a;
            rem=rem+a;
            a=rem/3;
            rem=rem%3;
        }
        if(rem!=2)
            r3=0;

        int h=r1;
        if(h<r2)
            h=r2;
        if(h<r3)
            h=r3;

        print(h);






    }


}

