#include <iostream>
#include <cmath>
#include "functions.h"
int gcd(int x,int y){

	int min_ele=min(x,y);
	int gcd_x_y=1;
	for(int i=2;i<=min_ele;i++){
		if(x%i==0&&y%i==0){
			gcd_x_y=i;
		}
	}

	return gcd_x_y;
}

int gcd_rec(int x,int y){

	if(x==0){
	   return y;
	}

	return gcd_rec(y % x, x);

}

