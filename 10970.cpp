#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{

    int m,n;

    while(scanf("%d",&m)!=EOF)
    {
        scanf("%d",&n);
        int cn=0;


        if(m<=n)
        {
            cn=m-1 + (n-1)*m;
            printf("%d\n",cn);

        }
        else
            {
                cn=n-1 + (m-1)*n;
                printf("%d\n",cn);

        }


    }






}
