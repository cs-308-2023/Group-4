#include <iostream>
#include "functions.h"

int factorial(int n){
    if (n < 0){
        std::cout << "Enter a non-negative number" << std::endl;
        return -1;
    }

    if(n != 1)
	    return(n * factorial(n-1));
    else
        return 1;
}