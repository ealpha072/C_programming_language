#include <stdio.h>
#include <stdlib.h>

//return a pointer of array 
int* sumDifferent(int* A, int size){
    int sumEven = 0, sumOdd = 0, sumAll = 0, i = 0;

    int *ptr = (int*)malloc(3*sizeof(int));
    printf("Size of ptr: %d \n", sizeof(ptr));

    for (i; i < size; i++){
        if (A[i] % 2 == 0){
            sumEven += A[i];
        }else{
            sumOdd += A[i];
        }
        sumAll+= A[i];
    }

    ptr[0] = sumEven;
    ptr[1] = sumOdd;
    ptr[2] = sumAll;

    return ptr;
}

int main(){
    int Arr[] = {12,10,12,23,1,2};
    int* sum = sumDifferent(Arr, 6);

    for (int i = 0; i < 3; i++){
        printf("%d \n", sum[i]);
    }
    free(sum);
    return 0;
}
