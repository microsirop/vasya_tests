#include <iostream>

class A{
public:
    A(){
        std::cout << "const A \n";
    }
    ~A(){
        std::cout << "destr A \n";
    }
};

class B: public A{
public:
    B(){
        std::cout << "const B \n";
    }
    ~B(){
        std::cout << "destr B \n";
    }
};

class C {
    A a;
public:
    C(){
        std::cout << "const C \n";
    }
    ~C(){
        std::cout << "destr C \n";
    }
};



int main(){
    //B b; // A B B A
    C c; // A C C A
    return 0;
}