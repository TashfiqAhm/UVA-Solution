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

int ar[100000];

int main()
{
    int t,n;
    scan(t);

    for(int i=0;i<t;i++)
    {
        scan(n);
        ll sum=0;
        for(int j=0;j<n;j++)
        {
            scan(ar[j]);
            sum=sum+ar[j];

        }

        double avg = sum/(n*1.00);
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(ar[j]>avg)
            c++;

        }

        double res= c/(n*1.00) *100;

        printf("%.3lf%%\n",res);

    }



}

