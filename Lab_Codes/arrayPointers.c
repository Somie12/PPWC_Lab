#include <stdio.h>

int main(){

    int i;
    int *p = NULL;
    int *ptr[5];
    int arr[] = {11,12,13,14,15};

    p = arr;
    ptr[0] = arr; 

    // printing the address and values of the array
    for(i=0; i<5; i++){
        printf("Value of arr[%d] = %d\n", i, arr[i]);
        printf("Address of arr[%d] = %p\n", i, (void*)&arr[i]);
    }

    printf("arr: %p\n", (void*)arr);
    printf("p: %p\n", (void*)p);
    printf("arr[0]: %p\n", (void*)&arr[0]);
    printf("arr: %d\n", *arr);
    printf("p: %d\n", *p);
    printf("ptr: %d\n", *ptr[0]); 
    printf("p: %p\n", (void*)p);
    printf("ptr: %p\n", (void*)ptr[0]);
    printf("p++: %p\n", (void*)++p);
    printf("p: %p\n", (void*)p);
    printf("ptr++: %p\n", (void*)++ptr[0]);
    printf("ptr: %p\n", (void*)ptr[0]);

    return 0;
}
