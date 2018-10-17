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
    int t;
    scan(t);
    cin.ignore();

    string s;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;

        //string res="";
        queue<char>q;

        int n=0;

        for(int j=0;j<s.length();)
        {
            int ln;
            n=0;
            if(s[j]<='Z' &&s[j]>='A')
            {
                ln=j;
                j++;
            }

            else
            {
                int k=1;
                while(s[j]<='9' && s[j]>='0')
                {
                    n=n*k + s[j]-48;
                    k=k*10;
                    j++;
                }


            }

            for(int k=0;k<n;k++)
                q.push(s[ln]);
        }

        printf("Case %d: ",i+1);

        while(!q.empty())
        {
            char c =q.front();
            q.pop();
            printf("%c",c);

        }
        printf("\n");
        //cout<<res<<endl;
    }


}

