#include <stdio.h>

void printString(const char *C){
    //C[0] = 'D';
    while (*C != 0){
        printf("%c", *C);
        C++;
    }
}

int main (){
    int dAr[2][3][2] = {{{1,2}, {3,4}, {5,6}}, { {7,8}, {9,10},{11,12}}};

    printf(" %d \n", dAr);

}
