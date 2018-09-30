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
    int t,e,f,c;
    scan(t);

    for(int i=0;i<t;i++)
    {
        scan(e);
        scan(f);
        scan(c);
        int kh =e+f;
        int res=0;
        while(kh>=c)
        {
            res=res +kh/c;
            kh=kh%c+kh/c;
        }
        print(res);


    }





}

