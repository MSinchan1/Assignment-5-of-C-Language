#include<stdio.h>
/*
Write program, which will print all numbers between 10 and 19, 30 and 39, 50 and 59,  … , 90 and 99. [Hint: check condition ((x/10)%2) == 1].
*/
int main()
{
    for(int i=1;i<=100;i++)
    {
        if((i/10)%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
