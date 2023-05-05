#include <stdio.h>


int main(){

    int a = 2;
    int b = 5;
    int *c=&a;
    int *d = &b;
    
    int *c = -1;
    printf("%d\n%d\n%d\n%d\n", a, b, *c, *d);


};