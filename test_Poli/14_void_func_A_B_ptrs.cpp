#include <iostream>

class A {
public:
    A() {
        std::cout << "A";
    }
};


class B : public A {
public: 
    B() {
        std::cout << "B";
    }
};

void f1(A*, A*) {};
void f2(B*, B*) {};

int main(){
    // A a;
    // B b;
    // f2(&a,&b); //  error: could not convert 'a' from 'A' to 'B'

    // const A a;
    // const B b;
    // f1(&a,&b);// не работает, т.к. не можем изменять константные значения указателей -  error: invalid conversion from 'const A*' to 'A*'

     A a;
     B b;
    f1(&a,&b);

     return 0;
}