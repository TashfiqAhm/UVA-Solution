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
    int cnt=0;

    string a,b;

    while(1)
    {
        cin>>a>>b;
        int car=0;
        cnt=0;
        int x,y;


        if(a.length() ==1 &&b.length() ==1)
            if(a[0]=='0' &&b[0]=='0' )
                break;

        if(a.length() >b.length())
        {
            b.insert(0,a.length()-b.length(),'0');
        }
        if(b.length() >a.length())
        {
            a.insert(0,b.length()-a.length(),'0');
        }


        for(int i=a.length()-1;i>=0;i--)
        {
            x=a[i]-48;
            y=b[i]-48;
            if(x+y+car>9)
            {
                cnt++;
                car=1;
            }

            else car=0;



        }

        if(cnt==0)
            printf("No carry operation.\n");

        else if(cnt==1)
            printf("1 carry operation.\n");

        else
            printf("%d carry operations.\n",cnt);




    }


}

