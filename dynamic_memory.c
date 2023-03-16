#include <stdio.h>
//malloc
//calloc

int printOdd(int *A, int size){
    int *ptr = (int *)malloc(2*sizeof(int));
    int sumOdd = 0;
    int sumEven = 0;
    int i = 0;
    for (i = 0; i < size; i++){
        if (A[i] % 2 != 0){
            printf("%d is odd \n", A[i]);
            sumOdd +=A[i];
        }else{
            sumEven +=A[i];
        }
    }
    *ptr = sumOdd;
    *(ptr + 1) = sumEven;
    return (ptr);
}


int main (){
    int nums[6] = {23,21,44,45,46,64};
    int size = sizeof(nums) / sizeof(int);
    int *ptr_main = printOdd(nums, size);

    printf("size: %d \n", sizeof(ptr_main));
    printf("First ptr main value: %d \n", *ptr_main);
    printf("Second ptr main value: %d", *(ptr_main + 1));
}
