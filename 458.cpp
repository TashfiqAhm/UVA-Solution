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

    while(getline(cin,s))
    {
        for(int i = 0;i<s.length();i++)
        {
            s[i]=s[i]-7;
        }
        cout<<s<<endl;

    }



}

