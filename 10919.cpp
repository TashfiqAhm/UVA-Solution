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
    int k,m;

    set<int>st;

    while(true)
    {
        st.clear();
        scan(k);
        if(k==0)
            break;
        scan(m);

        for(int i=0;i<k;i++)
        {
            int temp;
            scan(temp);
            st.insert(temp);

        }

        bool f=true;
        for(int i=0;i<m;i++)
        {
            int mem,req;
            scan(mem);
            scan(req);
            for(int j=0;j<mem;j++)
            {
                int temp;
                scan(temp);

                if(st.find(temp)!=st.end())
                    req--;

            }
            if(req>0)
                f=false;
        }

        if(f)
            printf("yes\n");
        else printf("no\n");


    }


}

