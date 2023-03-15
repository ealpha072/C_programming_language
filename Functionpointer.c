#include <stdio.h>

//pointers help in call by reference
void increase (int *p){
    *p = *p + 1; //p is dereferenced
}

int sumOfElements(int A[], int size){
    int i, sum = 0;

    for (i = 0; i < size; i++){
        sum += A[i];
    }
    return sum;
}

int main (){
    //sum of elements
    int A[]={23,45,6,7,8,9};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumOfElements(A, size);

    printf("Total is %d\n", total);
    //increase
    int num = 10;
    increase(&num); //pass address that p will point to
    printf("num = %d", num);
}

