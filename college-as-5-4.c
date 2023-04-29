#include<stdio.h>
/*
Print all numbers less than 10 and all numbers more than 90.
*/
int main()
{
    for(int i=1;i>=1;i++)
    {
        if(i<10 || i>90)
        {
            printf("%d ",i);
        }
    }
    return 0;
}