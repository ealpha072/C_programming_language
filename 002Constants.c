//constants in C are declared either using the `const` or `define`

#include <stdio.h>
#define pi 3.14 //no semicolon at the end

int main (){
	const float g = 9.8;
	float mass;
	printf("Mass is %f", mass*g)
}
