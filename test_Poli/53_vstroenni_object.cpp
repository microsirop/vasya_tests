#include <iostream>

class A {
    int m_a;
public:
    A(int=0){
        std::cout << "m_a can be set here\n";
    }
    void SetA(int a){
        m_a = a;
        std::cout << "m_a is set\n";
    }
};

class B {
    int m_b;
    A m_A;
public:
    B(int a, int b);
};

B::B(int a, int b){
    //m_A.m_a = a; //error: 'int A::m_a' is private within this context
    //m_A.SetA(a); // good
    m_A = A(a); // not effective, but works, вызов оператора присваивания по умолчанию
}

// B::B(int a, int b):m_A(a){ //good
// }



int main(){
    B b(4,5);
    return 0;
}