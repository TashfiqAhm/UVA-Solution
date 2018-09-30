#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos(1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    int h1,m1,h2,m2;
    while(true)
    {
        scan(h1);
        scan(m1);
        scan(h2);
        scan(m2);

        if(h1==0 &&m1==0 &&h2==0&&m2==0)
            break;

        int h,m;
        if(m2>=m1)
        {
            m=m2-m1;

            if(h2>h1)
                h=h2-h1;
            else if(h2<h1)h=24-h1+h2;
            else h=0;

        }
        else
        {
            m=60-m1+m2;
            if(h2>h1)
            {
                h=h2-h1-1;

            }


            else
                {
                    h=24-h1+h2-1;
                }

        }
        m=m+h*60;


        print(m);

    }



}

