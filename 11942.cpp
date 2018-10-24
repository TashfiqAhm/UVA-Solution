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

int ar[10];
int ar2[10];
int ar3[10];


void marge(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i] = ar2[f+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j] = ar2[q+1+j];
    }

    i=0;
    j=0;
    k=f;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
        {
            ar2[k] = L[i];
            i++;
        }

        else
        {
            ar2[k] = R[j];
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        ar2[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        ar2[k] = R[j];
        j++;
        k++;
    }
}

void marge_(int f , int l)
{
    int q;
    if(f<l)
    {
        q = (f+l)/2;
        marge_(f,q);
        marge_(q+1,l);

        marge(f,q,l);
    }
}

void marger(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i] = ar3[f+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j] = ar3[q+1+j];
    }

    i=0;
    j=0;
    k=f;

    while(i<n1 && j<n2)
    {
        if(L[i] >= R[j])
        {
            ar3[k] = L[i];
            i++;
        }

        else
        {
            ar3[k] = R[j];
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        ar3[k] = L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        ar3[k] = R[j];
        j++;
        k++;
    }
}

void marge_r(int f , int l)
{
    int q;
    if(f<l)
    {
        q = (f+l)/2;
        marge_r(f,q);
        marge_r(q+1,l);

        marger(f,q,l);
    }
}

int main()
{
    int n;
    scan(n);

    printf("Lumberjacks:\n");
    for(int i=0;i<n;i++)
    {



        for(int j=0;j<10;j++)
        {
            scanf("%d",&ar[j]);
            ar2[j]=ar[j];
            ar3[j]=ar[j];

        }
        int a=1,b=1;

        marge_(0,9);
        marge_r(0,9);

        for(int j=0;j<=9;j++)
        {
            if(ar[j]!=ar2[j])
                a=0;

        }

        for(int j=0;j<=9;j++)
        {
            if(ar[j]!=ar3[j])
                b=0;

        }

        if(a==0 &&b==0)
            printf("Unordered\n");
        else printf("Ordered\n");







    }



}
