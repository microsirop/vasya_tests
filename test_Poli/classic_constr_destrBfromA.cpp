#include <iostream>
int x = 0;
int y = 0;
struct A {
    A() {
        x++;
        std::cout <<"A " << x <<"\n"; 
    }
    ~A() {
        y++;
        std::cout <<"~A _ " << y <<"\n"; 
    }
};

struct B : public A {
    B() {
        std::cout <<"B\n"; 
    }
    ~B() {
        std::cout <<"~B\n"; 
    }
};


int main(){
    B b;
    A a;
    return 0;
}