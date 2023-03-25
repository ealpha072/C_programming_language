/*Write a function that checks for lowercase character.

Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise */

#include <stdio.h>

int _islower(int c){
    if (islower(c)){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int r = _islower('g');
    printf("%d", r);
}
