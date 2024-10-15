#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, n, *ptr;

   printf("Enter number of integers to be entered: \n");
   scanf("%d", &n);

   ptr = (int*)malloc(n * sizeof(int));
   if (ptr == NULL){
      printf("Memory not available \n");
      exit(1);
   }

   for(i=0;i<n;i++)
   {
      *(ptr+i) = i*2;
   }

   ptr = (int *)realloc(ptr, 5*sizeof(int));
   if(ptr == NULL)
   {
      printf("Memory not available \n");
      exit(1);
   }

   for(i=n;i<5;i++)
   {
      *(ptr+i) = i*10;
   }

   for(i=0;i<5;i++)
   {
      printf("%d ", *(ptr+i));
   }
   printf("\n");

   free(ptr); 

   return 0;
}
