/*This program was written to demonstarte C file structure*/

/** Documentation
 * file: age_calculator.c
 * description:program to print age of user
 */

//Links
#include <stdio.h>

//Definitions
#define CURRENT 2023

//Global Declarations
int age(int born_year);

//Main () function
int main(){
	int born_year = 1998;
	printf("Age: %d\n", age(born_year));
	return 0;
}

//sub-programs
int age (int born_year){
	return CURRENT - born_year;
}
