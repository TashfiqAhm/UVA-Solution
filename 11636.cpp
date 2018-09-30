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
    int n;
    int i=0;
    while(true)
    {
        scan(n);
        if(n<0)
            break;

        if(n==1)
            printf("Case %d: %d\n",i+1,0);
        else
        {
            int cn=0;

            for(int j=1;j<=14;j++)
            {
                if(n<=pow(2,j))
                {
                    cn=j;
                    break;
                }

            }
            printf("Case %d: %d\n",i+1,cn);

        }

        i++;
    }


}

