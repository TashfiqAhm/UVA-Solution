
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

string s[10];
int v[10];

int main()
{
    int t;
    scan(t);

    for(int j=0;j<t;j++)
    {
        int m=-1000;
        for(int i=0;i<=9;i++)
        {
            cin>>s[i];
            scan(v[i]);
            if(m<v[i])
                m=v[i];

        }

        printf("Case #%d:\n",j+1);
        for(int i=0;i<=9;i++)
        {
            if(v[i]==m)
                cout<<s[i]<<endl;
        }
    }



}
