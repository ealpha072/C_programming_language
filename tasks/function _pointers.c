#include<stdio.h>

int* sumNums(int *A, int size)
{
    int *ptr = (int *)malloc(3*sizeof(int));
    int sumOdd = 0, sumEven = 0, sumAll = 0;
    
    for (int i = 0; i < size; i++){
        if (A[i] % 2 != 0){
            sumOdd += A[i];
        }else{
            sumEven += A[i];
        }
        sumAll += A[i];
    }
    
    ptr[0] = sumOdd;
    ptr[1] = sumEven;
    ptr[2] = sumAll;
    
    return ptr;
}

int main(){
    int nums[] = {12, 13, 45,24,35, 234, 123, 765};
    int sizeArr = sizeof(nums) / sizeof(int);
    
    //using pointers to functions
    int (*ptr)(int, int);
    ptr = &sumNums;
    int *address = (ptr)(nums, sizeArr);
    //int* address = sumNums(nums, sizeArr);
    
    for(int j = 0; j < 3; j++){
        printf("%d \n", address[j]);
    }
    
}
