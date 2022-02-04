#include <iostream>

class A {
   
    int x;
public:
    void f();
    A(int a):x(a){
        std::cout<<x<<"\n";
    }
};

void Func(const A*){
    std::cout << "done!\n";
}

void A::f(){
    //Func(*this);//error: cannot convert 'A' to 'const A*'
    Func(this);
}

int main(){
    A a(4);
    a.f();
    return 0;
}