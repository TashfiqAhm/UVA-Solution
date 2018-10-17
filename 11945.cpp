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

double ar[20];

int main()
{
    int t;
    scan(t);
    for(int i=0;i<t;i++)
    {
        double sum=0;
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&ar[j]);
            sum=sum+ar[j];

        }


        double res=sum/12.0;
        ll th=res/1000.0;
        res= res-th*1000;

        if(th!=0)
        printf("%d $%lld,%.2lf\n",i+1,th,res);
        else
            printf("%d $%.2lf\n",i+1,res);
    }




}
