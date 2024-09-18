#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x; 
    int* ptr1 = &x; 

    printf("ptr: %p\n", (void*)ptr); 
    printf("ptr1: %p\n", (void*)ptr1); 

    int y = (*ptr)++;
    int z = (*ptr1)++;
    printf("*ptr++: %d\n", y);
    printf("*(ptr++): %d\n", z);
    printf("ptr: %p\n", (void*)ptr); 
    printf("ptr1: %p\n", (void*)ptr1); 
    printf("*++ptr: %d\n", *++ptr);
    printf("*(++ptr): %d\n", *(++ptr));

    return 0;
}
