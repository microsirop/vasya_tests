#include <iostream>

class A {
public:
    A():a(0), b(0) {}
    int a;
    int b;
};

class B: public A {
public:
    B():g(0) {}
    int g;
};

class D {
public:
    D():f(0) {}
    float f;
};

class C: public A, public D {
public:
    C(): d(0) {}
    double d;
};


int main(){
    C* pC = new C;
    A* pA = pC;
    D* pD = static_cast<D*> (pC); // что static_cast производит сдвиг указателя.
    std::cout << pC << std::endl;
    std::cout << pA << std::endl;
    std::cout << pD << std::endl;
    return 0;   
}

