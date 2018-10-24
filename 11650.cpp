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

    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d:%d",&a,&b);

        int h,m;

        if(b!=0)
           {
                m=60-b;
                h=12-a;


                if(h==0)
                    h=12;

                    h--;
                if(h==0)
                    h=12;


           }
           else
           {
               m=b;
               h=12-a;
               if(h==0)
                h=12;
           }

           if(h>=1 &&h<=9)
           {
               if(m>=0 && m<=9)
               {
                    printf("0%d:0%d\n",h,m);
               }
               else printf("0%d:%d\n",h,m);
           }

           else
            {
                if(m>=0 && m<=9)
               {
                    printf("%d:0%d\n",h,m);
               }
               else printf("%d:%d\n",h,m);
            }

    }


}

