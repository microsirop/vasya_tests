#include <iostream>

class A{
    int x;
};

class B: public A{
    double x;
};

int main(){
    B b;
    std::cout << sizeof(b);
    return 0;
}