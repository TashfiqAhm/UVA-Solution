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
    while(true)
    {
        scan(n);
        if(n==0)
            break;

        ll sum=0;

        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                sum=sum+__gcd(i,j);
            }
        }

        printll(sum);
    }


}

