#include <stdio.h>

int printString(char *C){
    while(*C != '\0'){
        putchar(*C);
        C++;
    }
    return 0;
}

int main(){
    char string[] = {"Alpha"};
    printString(string);
    return 0;
}
