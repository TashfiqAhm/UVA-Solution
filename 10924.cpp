#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

vector<int> prime;

void simpleSieve(int limit)
{
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));

    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*2; i<limit; i=i+p)
                mark[i] = false;
        }
    }

    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            //cout << p << " ";
        }
    }
}

void segmentedSieve(int n)
{

    int limit = floor(sqrt(n))+1;
    //vector<int> prime;
    simpleSieve(limit);


    int low = limit;
    int high = 2*limit;


    while (low < n)
    {
        if (high >= n)
           high = n;


        bool mark[limit+1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim =loLim + prime[i];


            for (int j=loLim; j<high; j= j+ prime[i])
                mark[j-low] = false;
        }


        for (int i = low; i<high; i++)
            if (mark[i - low] == true)
                prime.push_back(i);
                //cout << i << " ";


        low = low + limit;
        high = high + limit;
    }
}

int b_search_rec(int f,int l,int x)
{
    if(l>=f)
       {
           int mid = (f+l)/2;

           if(prime[mid]==x)
            return mid;

           if(prime[mid]>x)

            return b_search_rec(f,mid-1,x);

           return  b_search_rec(mid+1,l,x);

       }

       return -1;

}


#define pi acos(1.0)
#define scan(a) scanf("%d",&a)
#define scanll(a) scanf("%lld",&a)
#define print(a) printf("%d\n",a)
#define printll(a) printf("%lld\n",a)

typedef long long ll;
typedef unsigned long long ull;



int main()
{
    segmentedSieve(10000);
    string s;
    while(cin>>s)
    {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]<='z'&&s[i]>='a')
                {
                    sum=sum+s[i]-96;
                   // printf("%d ",s[i]-96);
                }

            else
            {
                sum=sum+ s[i]-38;
               // printf("%d ",s[i]-38);
            }
        }


        //printf("\n%d\n",sum);
        int y;
        if(sum==1)y=1;
        else y=b_search_rec(0,prime.size()-1,sum);

        if(y==-1)
            printf("It is not a prime word.\n");
        else
            printf("It is a prime word.\n");
    }


}

