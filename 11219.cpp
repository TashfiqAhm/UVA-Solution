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



int main()
{
    int d1,m1,y1,d2,m2,y2;
    int t;
    scan(t);
    for(int i=0;i<t;i++)
    {
        //printf("\n");
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);

        int y,m,d;
        y=y1-y2;

        if(y>=0)
        {
            if(m1<m2)
                y--;

            if(m1==m2)
                if(d1<d2)
                y--;
        }

        if(y<0)
            printf("Case #%d: Invalid birth date\n",i+1);
        else if(y>130)
            printf("Case #%d: Check birth date\n",i+1);
        else printf("Case #%d: %d\n",i+1,y);
    }


}

