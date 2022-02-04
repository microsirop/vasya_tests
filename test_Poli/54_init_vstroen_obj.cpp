#include <iostream>

class A {
    int m_a;
public:
    A(int=0){
        std::cout << "m_a can be set here\n";
    }
};

class B {
    int m_b;
    A m_A;
public:
    B(const A&, int b);
};

// B::B(const A& ra, int b){
//     m_A = ra; //not effective, but works, вызов оператора присваивания по умолчанию
// }

B::B(const A& ra, int b):m_A(ra){ //works and effective
}
// B::B(const A& ra, int b):m_A(ra.m_a){ // error: 'int A::m_a' is private within this context
// }



int main(){
    B b(4,5);
    return 0;
}