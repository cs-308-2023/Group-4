#include <iostream>
#include "functions.h"
#include <cstdio>
using namespace std;
int main(){
    print_hello();
    printf("\n");
    printf("The factorial of 5 is ");
    printf("%d",factorial(5));
    printf("\n");
    return 0;
}
