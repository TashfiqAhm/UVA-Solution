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

int ds(int p)
{
    while(p/10!=0)
    {
        int t=0;
        while(p!=0)
        {
            t=t+p%10;
            p=p/10;

        }
        p=t;

    }
    return p;

}

int main()
{
    int n;
    scan(n);

    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);

        int sum[16];
        int k=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]!=' ')
            {
                sum[k]= s[j] -48;
                k++;
            }

        }

        /*for(int j=0;j<16;j++)
        {
            printf("%d ",sum[j]);

        }printf("\n");*/

        for(int j=0;j<16;j++)
        {
            if(j%2==0)
                sum[j]=sum[j]*2;
        }

        /*for(int j=0;j<16;j++)
        {
            printf("%d ",sum[j]);

        }printf("\n");*/


        int tot=0;
        for(int j=0;j<16;j++)
        {
            tot=tot+ ds(sum[j]);

        }

        //printf("%d\n",tot);

        if(tot%10==0)
            printf("Valid\n");
        else printf("Invalid\n");

    }



}

