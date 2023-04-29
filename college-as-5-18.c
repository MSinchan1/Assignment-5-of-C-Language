#include<stdio.h>
/*
Write program, which will print all odd numbers between 0 and 9, 20 and 29, 40 and 49, … , 80 and 89 and all even numbers between 
10 and 19, 30 and 39, … , 90 and 99. [Hint: check condition ((x/10)%2) != (x%2)].
*/
int main()
{
    for(int i=1;i<=100;i++)
    {
        if((i/10)%2==0 && i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}