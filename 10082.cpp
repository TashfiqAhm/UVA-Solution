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

queue<char>ar;

int main()
{
    string s;
    while(getline(cin,s))
    {

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
                ar.push('V');

            if(s[i]=='C')
                ar.push('X');

            if(s[i]=='D')
                ar.push('S');

            if(s[i]=='E')
                ar.push('W');

            if(s[i]=='F')
                ar.push('D');

            if(s[i]=='G')
                ar.push('F');

            if(s[i]=='H')
                ar.push('G');

            if(s[i]=='I')
                ar.push('U');

            if(s[i]=='J')
                ar.push('H');

            if(s[i]=='K')
                ar.push('J');

            if(s[i]=='L')
                ar.push('K');

            if(s[i]=='M')
                ar.push('N');

            if(s[i]=='N')
                ar.push('B');

            if(s[i]=='O')
                ar.push('I');

            if(s[i]=='P')
                ar.push('O');

            if(s[i]=='R')
                ar.push('E');

            if(s[i]=='S')
                ar.push('A');

            if(s[i]=='T')
                ar.push('R');

            if(s[i]=='U')
                ar.push('Y');

            if(s[i]=='V')
                ar.push('C');

            if(s[i]=='W')
                ar.push('Q');

            if(s[i]=='X')
                ar.push('Z');

            if(s[i]=='Y')
                ar.push('T');

            if(s[i]=='1')
                ar.push('`');

            if(s[i]=='2')
                ar.push('1');

            if(s[i]=='3')
                ar.push('2');

            if(s[i]=='4')
                ar.push('3');

            if(s[i]=='5')
                ar.push('4');

            if(s[i]=='6')
                ar.push('5');

            if(s[i]=='7')
                ar.push('6');

            if(s[i]=='8')
                ar.push('7');

            if(s[i]=='9')
                ar.push('8');

            if(s[i]=='0')
                ar.push('9');

            if(s[i]=='-')
                ar.push('0');

            if(s[i]=='=')
                ar.push('-');

            if(s[i]=='[')
                ar.push('P');

            if(s[i]==']')
                ar.push('[');

            if(s[i]=='\\')
                ar.push(']');

            if(s[i]==';')
                ar.push('L');

            if(s[i]=='\'')
                ar.push(';');

            if(s[i]==',')
                ar.push('M');

            if(s[i]=='.')
                ar.push(',');

            if(s[i]=='/')
                ar.push('.');

            if(s[i]==' ')
                ar.push(' ');



        }

        char c;
        while(!ar.empty())
        {
            c=ar.front();
            cout<<c;
            ar.pop();

        }

        cout<<endl;



    }


}

