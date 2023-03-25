/*
Write a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit
*/
//4056

int print_last_digit(int n){
    int digit = 0;

    if (n == 0){
        printf("0");
    }else if(n < 0){
        digit = (n%10) * (-1);
        printf("%d", digit);
    }else{
        digit = n % 10;
        printf("%d", digit);
    }
}

int main(){
    print_last_digit(9);
}
