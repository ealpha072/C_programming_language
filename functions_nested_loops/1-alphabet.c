/*Write a function that prints the alphabet,
in lowercase, followed by a new line.

.Prototype: void print_alphabet(void);
.You can only use _putchar twice in your code*/

#include <stdio.h>

void print_alphabet(){
    int i = 97;
    for (i; i <= 122; i++){
        putchar(i);
    }
}

int main(){
    print_alphabet();
    return 0;
}
