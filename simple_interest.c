#include<stdio.h>
int main()
{
    void interest(float p,float r,float t);
    float p,r,t;
    printf("enter p , r and t:");
    scanf("%f%f%f",&p,&r,&t);
    interest(p,r,t);
}
void interest(float p,float r,float t)
{
    float SI=p*r*t/100;
    printf("\nSI=%.2f",SI);
}

