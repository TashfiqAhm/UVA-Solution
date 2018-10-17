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

    string s1,s2;
    for(int i=0;i<t;i++)
    {
        cin>>s1>>s2;

        int f=0;
        if(s1.length() != s2.length())
            f=1;
        else
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!='a' && s1[i]!='e'&& s1[i]!='i'&& s1[i]!='o' &&s1[i]!='u' )
                if(s1[i]!=s2[i])
                f=1;

        }

        if(f)
            printf("No\n");
        else printf("Yes\n");
    }


}

