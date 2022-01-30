#include <iostream>

class A{
    int m_a;
public:
    A(){}
    A(const A& a){
        m_a = a.m_a;
        std::cout<<"copy form A\n";
    }
};

class B: public A {
public:
    B(){}
    B(const B& b):A(b){ //вызов конструктора базового класса

    }
};

int main(){
    B a;
    B d(a);
    return 0;
}