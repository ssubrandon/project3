// Autogenerated Scheme to C++ Code
// File: wattstest8.cpp
#include <iostream>
#include "Object.h"
using namespace std;

Object insert_last(Object ls, Object v){
	return Object(	if(	listp()){
		if(	nullp()){
		cons(,"()";
);
;
	}
	else{
			cons(	listop("car",,insert_last(	listop("cdr",);
;
	}
;
	}
	else{
		"first_argument_of_insert_last_must_be_a_list";
;
	}
Object(ls)Object(ls)Object(v)Object(ls)Object(ls)Object(v);
);
}
Object list_reverse(Object ls){
	return Object(	if(	listp()){
		if(	nullp()){
	"()";
;
	}
	else{
		insert_last(list_reverse(	listop("cdr",	listop("car",;
	}
;
	}
	else{
		"list_reverse_requires_a_list_argument";
;
	}
Object(ls)Object(ls)Object(ls)Object(ls);
);
}
int main(){
	cout << list_reverse("(indentifier numeric literal 	cout << endl;
symbol 'anything 1 1.01 "HelloWorld")";
	cout << endl;
	cout << 	cons("a ";
,"b";
);
	cout << endl;
	return 0;
}