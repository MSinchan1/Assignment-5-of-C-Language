#include<stdio.h>
/*
Write program, which will print all even numbers less then 50 and all odd numbers more than 50.
*/
int main()
{
    int i;
    for(i=1;i<50;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    for(i=50;i<=100;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}