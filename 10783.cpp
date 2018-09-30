#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int cn=0;
        for(int j=a;j<=b;j++)
        {
            if(j%2!=0)
                cn=cn+j;
        }
        printf("Case %d: %d\n",i+1,cn);
    }





}

