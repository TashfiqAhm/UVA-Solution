
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int ar[10000];

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

    int  t,n,p,q;

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {

        scanf("%d %d %d",&n,&p,&q);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[j]);

        }

        marge_sort(0,n-1);
        int cn=0;
        int sumw=0;

        for(int j=0;j<n;j++)
        {

            if(cn+1<=p && sumw+ar[j]<=q )
            {
                cn++;
                sumw=sumw+ar[j];
            }
            else break;


        }

        printf("Case %d: %d\n",i+1,cn);


    }




}
