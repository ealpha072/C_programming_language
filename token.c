
/*Tokens are the building blocks of C language*/
//Take below code for example

#include <stdio.h>

int main (){
	printf("Hello, world\n")
}
//Every meaningfull character, word or symbol is a Toekn.
//The compilation process
//C Programs --> Group characters into Tokens --> Translate tokens into code
//Types of tokens --> {Keywords, Identifiers, Constants, Special Chars, Strings,
//Operators}
//const are declared by keywords, const and #define
//secondart constants -- {Arrays, Pointers, Structure, union
//Arrays --> int nums[5] = {1,2,3,4,5}; or int nums[5];
//Pointers - value denotes the address of  memory location. int *nums means,
//nums is a pointer of type int.
//
//Structure - is more like an object, declared as
Struct DataFlair{
	char name[30];
	int roll_num;
	float marks;
}
//values of Struct are called members
//
//Unions - same as structs but use less memory. Also, only stores info at one 
//field at a time
//
//enum - are user defined data types. 
enum week {mon, tues, wed} 
//allocates items in braces to var week
//
//Strings in C - arerepresented as an array of characters having null character
//'\0' at the end denoting end of string. Size of string is number of chars times 1 byte

char string[10] = "scaler" //means 10 bytes of memory is allocated to store string
//value
char string[] = "scaler" //dynamically allocates memory during execution




