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

    string st;
    ll cnt=1;

    while(1)
    {
        cin>>st;
        if(!st.compare("*"))
            break;

        if(!st.compare("Hajj"))
            printf("Case %lld: Hajj-e-Akbar\n",cnt);

        if(!st.compare("Umrah"))
            printf("Case %lld: Hajj-e-Asghar\n",cnt);

            cnt++;
    }




}

