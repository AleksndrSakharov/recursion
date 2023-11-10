#include <stdio.h>
#include <stdlib.h>

int print_num(int n){
    printf("%d \n", n);
    if(n == 0) return 0;
    int next_print_num = print_num(n - 1);
    return next_print_num;
}

unsigned long long fib(unsigned long long n){
    if(n == 2 || n == 1) return 1;
    if(n == 0) return 0;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int asd = 10;
    printf("%llu\n", fib(3));
    return 0;
}