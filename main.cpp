#include <iostream>
#include "functions.h"
#include <cstdio>
using namespace std;
int main(){
    print_hello();
    cout<<endl;
    cout<<"The factorial of 5 is ";
    cout<<factorial(5)<<endl;
    int x=56;
    int y=98;
    cout<<"The GCD of "<<x<<"and "<<y<<" is: "<<gcd(x,y)<<endl;
    cout<<"The GCD of "<<x<<"and "<<y<<" using recursive function is: "<<gcd_rec(x,y)<<endl;

    return 0;
}
