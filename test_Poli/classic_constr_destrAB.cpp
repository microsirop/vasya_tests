#include <iostream>
int x = 0;
struct A {
    A() {
        std::cout <<"A\n"; 
    }
    ~A() {
        std::cout <<"~A\n"; 
    }
};

struct B {
    A a;
    B() {
        std::cout <<"B\n"; 
    }
    ~B() {
        std::cout <<"~B "<< x << "\n"; 
    }
};


int main(){
    B b;
    A a;
    return 0;
}

/*
*
A
B
~B
~A
*
*/