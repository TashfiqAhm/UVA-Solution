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

int ar[2000];


int main()
{
    int n;

    while(scan(n)!=EOF)
    {
        int f=0;
        for(int i=0;i<n;i++)
            scan(ar[i]);

        for(int i=n-1;i>=0;i--)
        {
           for(int j=i-1;j>=0;j--)

           {
               if(i!=0)
               {
                   if(ar[j]>ar[i])
                    f++;
               }
           }

        }

        printf("Minimum exchange operations : %d\n",f);


    }


}

