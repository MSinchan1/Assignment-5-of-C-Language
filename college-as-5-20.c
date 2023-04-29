#include<stdio.h>
/*
Write program, which will print all odd numbers between 0 and 9, 30 and 39, 60 and 69, 90 and 99 and all even numbers between 
10 and 29, 40 and 59, 70 and 89. 
*/
int main()
{
    for(int i=1;i<100;i++)
    {
        if((i/10)%3==0 && i%2!=0 || (i/10)%3!=0 && i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}