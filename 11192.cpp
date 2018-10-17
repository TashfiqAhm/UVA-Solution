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
    string s ;
    int n;

    while(cin>>n)
    {
        if(n==0)
            break;
        cin.ignore();

        cin>>s;

        queue<string>q;
        int m=s.length()/n;
        //printf("%d\n",s.length());
        int j=0;
        for(int i=0;i<n;i++)
        {
            string s2(s,j,m);
            q.push(s2);
            j=j+m;
        }

        while(!q.empty())
        {
            string s2 = q.front();
            q.pop();

            reverse(s2.begin(),s2.end());

            cout<<s2;


        }

        cout<<endl;
    }

    //FA0ETA SINAHG RI0NAT WON0QA 0NARI0
    //ATE0AF HANIS AN0IR GHNOW TANN0 AQ0N




}

