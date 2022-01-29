#include <iostream>


class A {
    int m_a;
public:
    A(int = 0){
        std::cout << "A -> ";
    };
};

class B {
    int m_b;
public:
    B(int = 5){
        std::cout << " B -> ";
    };
};

class C: public B {
    int m_c;
    A m_A;
public:
    C(int a, int b, int c){
        std::cout << " C";
    };
};

int main(){
    C c(1,2,3);
    return 0;
}