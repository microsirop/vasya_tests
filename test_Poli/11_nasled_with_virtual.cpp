#include <iostream>
// compile error ???!!!
class A {
public:
    void F(){
        std::cout << "A\n";
    };
};
class B:public A {
public:
    virtual void F(){
        std::cout << "func B\n";
    };
    //virtual void F() = 0; // - любое поле требует его опреленение(тело функции), кроме чисто виртуальных функций
};
class C: public B {
public:
    virtual void F(){
        std::cout << "func C\n";
    };
};
// какой метод будет вызван
int main(){
    B* p = new C;
    p->F();
    return 0;
}

