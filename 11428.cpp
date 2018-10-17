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

ll ar[101];

int main()
{
    for(int i=0;i<101;i++)
    {
        ar[i]=i*i*i;
    }
    int n;
    while(true)
    {
        scan(n);
        if(n==0)
            break;
        int x=0,y=0;

        for(int i=0;i<101;i++)
        {
            if(ar[i]>n)
            for(int j=0;j<i;j++)
            {
                if(ar[i]-ar[j]==n)
                {
                    x=i;
                    y=j;
                    break;
                }
            }
            if(x!=0 &&y!=0)
                break;
        }

//        for(int i=0;i<101;i++)
//        {
//            printf("%lld ",ar[i]);
//        }

        if(x==0&&y==0)
        printf("No solution\n");
        else
            printf("%d %d\n",x,y);


    }


}

