#include<stdio.h>
/*
Write program, which will print all even numbers between 10 and 19, 30 and 39, … , 90 and 99.
*/
int main()
{
    for(int i=1;i<=100;i++)
    {
        if((i/10)%2!=0 && i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}