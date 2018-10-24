
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

string s;
queue<string>q;

int main()
{
    int t;
    scan(t);
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        int j=0;
        while(getline(cin,s))
        {
            if(!s.compare(""))
            {
                //printf("\n");
                break;
            }
            //if(i!=0)
               // printf("\n");


            for(int k=0;k<s.length();k++)
            {
                if(s[k]=='1')
                    s[k]='I';

                if(s[k]=='2')
                    s[k]='Z';

                if(s[k]=='3')
                    s[k]='E';

                if(s[k]=='4')
                    s[k]='A';

                if(s[k]=='5')
                    s[k]='S';

                if(s[k]=='6')
                    s[k]='G';

                if(s[k]=='7')
                    s[k]='T';

                if(s[k]=='8')
                    s[k]='B';

                if(s[k]=='9')
                    s[k]='P';

                if(s[k]=='0')
                    s[k]='O';
            }

            q.push(s);
            cout<<s<<endl;


        }

        if(i!=t-1)
            printf("\n");




    }



}
