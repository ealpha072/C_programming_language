/*Write a function that prints 10 times the alphabet,
in lowercase, followed by a new line.
Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code*/

#include <stdio.h>

void print_alphabet_x10(){
     for(int i = 1; i <= 10; i++){
        for (int j = 97; j <= 122; j++){
            putchar(j);
        }
        putchar('\n');
     }
}

int main(){
    print_alphabet_x10();
    return 0;
}
