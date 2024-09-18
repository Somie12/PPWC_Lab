#include <stdio.h>

int main()
{
   int num;
   int base=1;
   int decimal = 0;
    printf (" Enter a binary number with the combination of 0s and 1s \n");  
    scanf (" %d", &num);
    int binary = num;
    int rem=0;
    while(num>0)
    {
         rem = num%10;
         decimal = decimal + rem* base;
         num = num/10;
         base = base*2;
    }
    
    printf ( " The binary number is %d \t", binary);  
    printf (" \n The decimal number is %d \t", decimal);
    return 0;
}
