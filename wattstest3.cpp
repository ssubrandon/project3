// Autogenerated Scheme to C++ Code
// File: wattstest3.cpp
#include <iostream>
#include "Object.h"
using namespace std;

Object square(Object b){
	return Object((Object(b)*Object(b)));
}
Object reciprocal(Object value){
	return Object((Object(1)/Object(value)));
}
int main(){
	cout << square(Object(25));
	cout << endl;
	cout << square(Object(-25));
	cout << endl;
	cout << square(Object(14.4));
	cout << endl;
	cout << square(Object(0));
	cout << endl;
	cout << reciprocal(Object(4));
	cout << endl;
	cout << reciprocal(Object(6.25));
	cout << endl;
	cout << reciprocal(Object(0));
	cout << endl;
	cout << reciprocal(Object("abc"));
	cout << endl;
	return 0;
}
