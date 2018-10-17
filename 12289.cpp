#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

#define pi acos-1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    int t;
    scan(t);

    string s;
    for(int i=0;i<t;i++)
    {

        cin>>s;
        if(s.length()==3)
        {
            int a1=0,a2=0,a6=0;

            if(s[0]=='o')
                a1++;
            if(s[0]=='t')
                a2++;
            if(s[0]=='s')
                a6++;

            if(s[1]=='n')
                a1++;
            if(s[1]=='w')
                a2++;
            if(s[1]=='i')
                a6++;

            if(s[2]=='e')
                a1++;
            if(s[2]=='o')
                a2++;
            if(s[2]=='x')
                a6++;

            if(a1>=2)
            printf("1\n");
            if(a2>=2)
            printf("2\n");
            if(a6>=2)
            printf("6\n");

        }

        if(s.length()==4)
        {
            int a4=0,a5=0,a9=0,a0=0;

            if(s[0]=='f')
                a4++;
            if(s[0]=='f')
                a5++;
            if(s[0]=='n')
                a9++;
            if(s[0]=='z')
                a0++;

            if(s[1]=='o')
                a4++;
            if(s[1]=='i')
                a5++;
            if(s[1]=='i')
                a9++;
            if(s[1]=='e')
                a0++;

            if(s[2]=='u')
                a4++;
            if(s[2]=='v')
                a5++;
            if(s[2]=='n')
                a9++;
            if(s[2]=='r')
                a0++;

            if(s[3]=='r')
                a4++;
            if(s[3]=='e')
                a5++;
            if(s[3]=='e')
                a9++;
            if(s[3]=='o')
                a0++;

            if(a4>=3)
            printf("4\n");
            if(a5>=3)
            printf("5\n");
            if(a9>=3)
            printf("9\n");
            if(a0>=3)
            printf("0\n");

        }

        if(s.length()==5)
        {
            int a3=0,a7=0,a8=0;

            if(s[0]=='t')
                a3++;
            if(s[0]=='s')
                a7++;
            if(s[0]=='e')
                a8++;

            if(s[1]=='h')
                a3++;
            if(s[1]=='e')
                a7++;
            if(s[1]=='i')
                a8++;

            if(s[2]=='r')
                a3++;
            if(s[2]=='v')
                a7++;
            if(s[2]=='g')
                a8++;

            if(s[3]=='e')
                a3++;
            if(s[3]=='e')
                a7++;
            if(s[3]=='h')
                a8++;

            if(s[4]=='e')
                a3++;
            if(s[4]=='n')
                a7++;
            if(s[4]=='t')
                a8++;

            if(a3>=4)
            printf("3\n");
            if(a7>=4)
            printf("7\n");
            if(a8>=4)
            printf("8\n");


        }

    }



}

