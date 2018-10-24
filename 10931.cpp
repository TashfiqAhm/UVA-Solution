#include<bits/stdc++.h>
#include<algorithm>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    ll n;

    while(true)
    {
        scanf("%lld",&n);
        if(n==0)
            break;

        int ar[100000];

        int p=0;
        for(p=0;;p++)
        {
            ar[p]= n%2;
            n=n/2;

            if(n==0)
                break;
        }

        ll cn=0;
        for(int i =0;i<=p;i++)
        {
            if(ar[i]==1)
                cn++;
        }



        printf("The parity of ");

        for(int i=p;i>=0;i--)
        {
            printf("%d",ar[i]);
        }

        printf(" is %lld (mod 2).\n",cn);
        //printf("%s",ar);
    }









}

