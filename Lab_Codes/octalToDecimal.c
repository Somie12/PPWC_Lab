#include <stdio.h>

int main()
{
   int num;
   int base=1;
   int decimal = 0;
    printf (" Enter a octal number:  \n");  
    scanf (" %d", &num);
    int octal= num;
    int rem=0;
    while(num>0)
    {
         rem = num%10;
         decimal = decimal + rem* base;
         num = num/10;
         base = base*8;
    }
    
    printf ( " The octal number is %d \t", octal);  
    printf (" \n The decimal number is %d \t", decimal);
    return 0;
}
