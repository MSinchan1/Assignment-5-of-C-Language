#include<stdio.h>
/*
Write a pogram which prints the number between 20 to 40 and 60 to 70
*/
int main()
{
    int x;    
    for (x=21;x<70;x++)      
    {
        if(x>20 && x<=40 || x>=60 && x<70)           
         {
            printf("%d, ",x);
         }
    }
    return 0;
}