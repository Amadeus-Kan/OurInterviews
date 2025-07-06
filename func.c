#include<stdio.h>
#include<stdlib.h>

int func(int a, int b){
	return a * b;
}

int main(){

	int a = 1;
	int b = 2;
	return func(a,func(a, b));
}	