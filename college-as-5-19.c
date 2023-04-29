#include<stdio.h>
/*
Write program, which will print all even numbers between 10 and 29, 40 and 59, 70 and 89. 
*/
int main()
{
    for(int i=1;i<100;i++)
    {
        if((i/10)%3!=0 && i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}