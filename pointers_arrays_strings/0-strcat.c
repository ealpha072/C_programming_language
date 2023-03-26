/*
Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string,
overwriting the terminating null byte (\0) at the end of dest,
and then adds a terminating null byte
Returns a pointer to the resulting string dest
*/

#include <stdio.h>

char *_strcat(char *dest, char*src){
    int len_dest = 0, len_src = 0, sum_len = 0;

    while(*dest != '\0'){
        len_dest++;
        dest++;
    }
    dest-=len_dest;

    while(*src != '\0'){
        len_src++;
        src++;
    }
    src-=len_src;

    sum_len = len_dest + len_src;
    char *long_str = (char*)malloc(sum_len + 1);

    for (int i = 0; i < len_dest; i++){
        long_str[i] = *dest;
        dest++;
    }

    for (int i = len_dest; i < sum_len; i++){
        long_str[i] = *src;
        src++;
    }

    long_str[sum_len] = '\0';

    return long_str;
}

int main(){
    char *str = "Alpha is a good boy and codes ";
    char *str_1 = "Apha is good";
    char *long_string = _strcat(str, str_1);

    printf("%s", long_string);
    return 0;
}
