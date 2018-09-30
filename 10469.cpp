#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int t;
    scanf("%d",&t);
    cin.ignore();

    for(int j=0;j<t;j++)
    {
        string s;
        getline(cin,s);

        int l=s.length();
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
                c++;

            if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
                c=c+2;

            if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
                c=c+3;
            if(s[i]=='s'||s[i]=='z')
                c=c+4;


        }

        printf("Case #%d: %d\n",j+1,c);


    }







}

