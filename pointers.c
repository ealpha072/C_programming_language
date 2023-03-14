#include <stdio.h>

void main (){
    int num = 10;
    int *ptr = &num;
    int **ptr_two = &ptr;
    int ***ptr_three = &ptr_two;

    //number itself
    printf("Address of num: %p \n", &num);
    printf("Value of num: %d \n", num);
    printf("----------- \n ------- \n");

    //first pointer
    printf("Address of pointer: %p \n", &ptr); //unique address
    printf("Pointer value is: %p \n", ptr);//address of num
    printf("Value storeed in ponter is: %d \n", *ptr); //10
    printf("----------- \n ------- \n");

    //second pointer
    printf("Address of pointer two: %p \n", &ptr_two); //unique address
    printf("Pointer two value is: %p \n", ptr_two); //addrsss of ptr
    printf("Value stored in pointer two is: %d \n", **ptr_two); //10
    printf("----------- \n --------- \n");

    //third pointer
    printf("Address of pointer three: %p \n", &ptr_three); //unique addresss
    printf("Pointer two value is: %p \n", ptr_three); //address of pointer two
    printf("Value stored in pointer two is: %d \n", ***ptr_three); //10
}
