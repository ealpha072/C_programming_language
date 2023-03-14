#include <stdio.h>

int main (){
    int A[] = {2,3,4,5,6,7,7};

    for (int i = 0; i<7; i++){
        printf("Address = %d\n", A+i);
        printf("Value = %d\n", *(A+i));
    }
}
