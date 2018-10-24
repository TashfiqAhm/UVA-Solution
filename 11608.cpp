
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;

int bp;
int m[12];
int p[12];
int res[12];
int sum[13];
int c=0;


int main()
{
    while(1)
    {

        scanf("%d",&bp);
        if(bp<0)
            break;
            c++;
        memset(res,0,sizeof(res));
        memset(sum,0,sizeof(sum));

        for(int i=0;i<12;i++)
            scanf("%d",&m[i]);

        for(int i=0;i<12;i++)
            scanf("%d",&p[i]);

        sum[0]=bp;
        if(sum[0]>=p[0])
        {
            res[0]=1;
            sum[0]=sum[0]-p[0];
        }


        for(int i=1;i<12;i++)
        {
            sum[i]=sum[i-1]+m[i-1];
            if(sum[i] >=p[i])
            {
                res[i]=1;
                sum[i]=sum[i]-p[i];
            }

        }

        printf("Case %d:\n",c);

        for(int i=0;i<12;i++)
        {
            if(res[i]==0)
                printf("No problem. :(\n");
            else printf("No problem! :D\n");
        }









    }
    return 0;
}
