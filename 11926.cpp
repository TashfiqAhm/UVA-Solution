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

ll ar[100000000][2];

void marge(int f, int q, int l)
{
    int i,j,k;

    int n1 = q - f +1;
    int n2 = l-q;

    ll L[n1][2],R[n2][2];

    for(i=0;i<n1;i++)
    {
        L[i][0] = ar[f+i][0];
        L[i][1] = ar[f+i][1];
    }

    for(j=0;j<n2;j++)
    {
        R[j][0] = ar[q+1+j][0];
        R[j][1] = ar[q+1+j][1];
    }

    i=0;
    j=0;
    k=f;

    while(i<n1 && j<n2)
    {
        if(L[i][0] < R[j][0])
        {
            ar[k][0] = L[i][0];
            ar[k][1] = L[i][1];
            i++;
        }

        else if(L[i][0] == R[j][0])
        {
            if(L[i][1] <= R[j][1])
            {
                ar[k][0] = L[i][0];
                ar[k][1] = L[i][1];
                i++;
            }
            else
                {
                    ar[k][0] = R[j][0];
                    ar[k][1] = R[j][1];
                    j++;

                }

        }

        else
        {
            ar[k][0] = R[j][0];
            ar[k][1] = R[j][1];
            j++;
        }

        k++;
    }

    while(i<n1)
    {
        ar[k][0] = L[i][0];
        ar[k][1] = L[i][1];
        i++;
        k++;
    }

    while(j<n2)
    {
        ar[k][0] = R[j][0];
        ar[k][1] = R[j][1];
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

    ll st,et,rt;
    ll n,m;
    for(;;)
    {
        scanll(n);
        scanll(m);
        if(n==0 &&m==0)
            break;

        int ct=0;
        for(int i=0;i<n;i++)
        {
            scanll(ar[ct][0]);
            scanll(ar[ct][1]);
            ct++;
        }


        for(int j=0;j<m;j++)
        {
            scanll(st);
            scanll(et);
            scanll(rt);

            for(;;)
            {
                ar[ct][0]=st;
                ar[ct][1]=et;
                ct++;
                if(et>1000000)
                    break;
                st=st+rt;
                et=et+rt;

            }


        }

        ct--;
        marge_sort(0,ct);
        int f=0;

        for(int i=0;i<ct;i++)
        {
            if(ar[i][1]>ar[i+1][0])
            {
                f=1;
                break;
            }
        }



        if(f==0)
            printf("NO CONFLICT\n");
        else printf("CONFLICT\n");


    }




}
