
#include<stdio.h>

int main()
{
    float c,f,d,a,b;
    int t ,i;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%f %f",&c,&d);
        a=((9.00/5.00)*c)+32.00;
        b= a+d;
        f= ((b-32.00)*5.00)/9.00;
        printf("Case %d: %.2f\n",(i+1),f);
    }
    return 0;
}
