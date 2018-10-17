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
    string s;

    while(cin>>s)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A' ||s[i]=='B' ||s[i]=='C')
                s[i]='2';

            if(s[i]=='D' ||s[i]=='E' ||s[i]=='F')
                s[i]='3';

            if(s[i]=='G' ||s[i]=='H' ||s[i]=='I')
                s[i]='4';

            if(s[i]=='J' ||s[i]=='K' ||s[i]=='L')
                s[i]='5';

            if(s[i]=='M' ||s[i]=='N' ||s[i]=='O')
                s[i]='6';

            if(s[i]=='P' ||s[i]=='Q' ||s[i]=='R'||s[i]=='S')
                s[i]='7';

            if(s[i]=='T' ||s[i]=='U' ||s[i]=='V')
                s[i]='8';

            if(s[i]=='W' ||s[i]=='X' ||s[i]=='Y'||s[i]=='Z')
                s[i]='9';


        }

        cout<<s<<endl;
    }


}

