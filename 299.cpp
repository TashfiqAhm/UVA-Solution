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

int ar[100];


int main()
{
    int t;
    scan(t);
    for(int i=0;i<t;i++)
    {

        int l;
        scan(l);

        for(int j=0;j<l;j++)
        {
            scan(ar[j]);
        }

        int s=0;
        for(int j=0;j<l;j++)
        {
            for(int k=0;k<j;k++)
            {
                if(ar[k]>ar[j])
                    s++;
            }
        }

        printf("Optimal train swapping takes %d swaps.\n",s);
    }


}


