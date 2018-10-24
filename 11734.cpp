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
    int t;
    scan(t);
    cin.ignore();
    string s1,s2;

    for(int i=0;i<t;i++)
    {
        int f1=0,f2=0;
        getline(cin,s1);
        getline(cin,s2);

        string tm="";
        for(int j=0;j<s1.length();j++)
        {
            if(s1[j]!=' ')
            {
                tm+= s1[j];
            }
            else f1=1;


        }

        if(!s2.compare(tm))
        {

            if(f1==0)
                printf("Case %d: Yes\n",i+1);
            else printf("Case %d: Output Format Error\n",i+1);

        }

        else
        {

            printf("Case %d: Wrong Answer\n",i+1);


        }

        //cout<<s1<<endl<<s2<<endl<<tm<<endl;

    }



}
