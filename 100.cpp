#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
vector<ll>ar;


void marge(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i] = ar[f+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j] = ar[q+1+j];
    }

    i=0;
    j=0;
    k=f;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            ar[k] = L[i];
            i++;
        }

        else
        {
            ar[k] = R[j];
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        ar[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        ar[k] = R[j];
        j++;
        k++;
    }
}

void marge_sort(int f , int l)
{
    int q;
    if(f<l)
    {
        q = (f+l)/2;
        marge_sort(f,q);
        marge_sort(q+1,l);

        marge(f,q,l);
    }
}

int main()
{
    ll a,b;
    while(scanf("%lld",&a)!=EOF)
    {
        scanf("%lld",&b);

    ll x=max(a,b);
    ll y=min(a,b);

    ar.clear();
    for(int i=y;i<=x;i++)
    {
        int cn=1;
        int n=i;
        while(n!=1)
        {
            if(n%2==0)
                n=n/2;
            else n=3*n+1;

            cn++;
        }
        //printf("%d\n",cn);
        ar.push_back(cn);
    }

    marge_sort(0,ar.size()-1);

    printf("%lld %lld %d\n",a,b,ar[ar.size()-1]);

    }











}

