#include <stdio.h>

int main()
{
  
    
    double num, fractpart, intpart;
   
   
    printf("Enter an number: \n");
    scanf("%d", &num);
    
    fractpart = modf(x, &intpart);
    
    int sign = (num>= 0 ? 1 : -1);
    float temp = num;
    float sum=0;
    int digit=0;
  
       while(num!=0)
	    {
		digit = num%10;
		
		//sum = sum +(num  ? abs(digit) : digit);
		sum = sum + (sign*digit);
		num=num/10;
	    }
      if(sign==-1)
       {
           printf("The sum of the digits is:  -%d\n", sum );
       }
       
       else if (sign==1)
       {
          printf("The sum of the digits is:  %d\n", sum );
       }
         
          return 0;
    }
