#include<stdio.h>
int main()
{
    double n,p,i,temp=1;
    printf("Enter a number: ");
    scanf("%lf", &n);
    printf("Enter power: ");
    scanf("%lf", &p);
    for(i=1;i<=p;i++)
    {
        temp*=n;
    }
    printf("%.2lf to the power %.2lf is= %.2lf",n,p,temp);
}




