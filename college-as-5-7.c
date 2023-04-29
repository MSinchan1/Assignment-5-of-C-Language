#include<stdio.h>
/*
Write program, which prints all even numbers between 20 and 40, and all odd numbers between 50 and 80.
*/
int main()
{
    int i;
    for(i=20;i<40;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    for(i=50;i<80;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}