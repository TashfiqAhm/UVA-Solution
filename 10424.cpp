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



int main()
{
    string s1,s2;
    while(getline(cin,s1))
    {
        //getline(cin,s2);
        int sum1=0;
        int sum2=0;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]<='z'&&s1[i]>='a')
            {
                sum1=sum1+s1[i]-96;
                //printf("%d ",s1[i]-96);
            }

            else if(s1[i]<='Z'&&s1[i]>='A')
            {
                sum1=sum1+ s1[i]-64;
                //printf("%d ",s1[i]-64);
            }
        }




        while(sum1/10!=0)
        {
            int t=0;
            while(sum1!=0)
            {
                t=t+sum1%10;
                sum1=sum1/10;

            }
            sum1=t;

        }



        getline(cin,s1);
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]<='z'&&s1[i]>='a')
            {
                sum2=sum2+s1[i]-96;
               // printf("%d ",s1[i]-96);
            }

            else if(s1[i]<='Z'&&s1[i]>='A')
            {
                sum2=sum2+ s1[i]-64;
                //printf("%d ",s1[i]-64);
            }
        }

        while(sum2/10!=0)
        {
            int t=0;
            while(sum2!=0)
            {
                t=t+sum2%10;
                sum2=sum2/10;

            }
            sum2=t;

        }


       // printf("\n%d %d\n",sum1,sum2);

        double res;
        if(sum2>=sum1)

        res=sum1/(sum2*1.00)*100.00;

        else
            res=sum2/(sum1*1.00)*100.00;

        printf("%.2lf %%\n",res);
    }


}

