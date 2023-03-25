/*Write a function that computes the absolute value of an integer.

Prototype: int _abs(int);*/

int _abs(int n){
    return abs(n);
}

int main(){
    int r = _abs(20);
    printf("%d", r);
}
