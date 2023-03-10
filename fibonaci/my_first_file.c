#include <stdio.h>

int fibonacci(int max_fib){
    int result;
    int first;
    int second;
    first=0;
    second=1;
    if (max_fib>1){
        while (max_fib>0){
            result = first + second;
            first = second;
            second = result;

            max_fib--;
        }       
    }
    else{
        return max_fib;
    }

    return result;
}

int main(void){
    int fib;
    fib = fibonacci(7);
    printf("%i\n", fib);
    return 1;
}
