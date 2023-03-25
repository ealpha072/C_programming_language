/*Write a function that checks for alphabetic character.

Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise*/

int _isalpha(int c){
    if(isalpha(c)){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int r = _isalpha('g');
    printf("%d", r);
}
