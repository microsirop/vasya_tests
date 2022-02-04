#include <iostream>

int main(){
	// int i;
	// double *p = reinterpret_cast<double *>(&i);
	// *p = 3.3; // ub but compiles, BUT segmentation fault
	double i;
	int *p = reinterpret_cast<int *>(&i);
	*p = 3; // compiles and execute  
	 std::cout<<*p;
	return 0;
}