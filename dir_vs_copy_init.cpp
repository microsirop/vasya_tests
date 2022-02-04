// разница между инициализацией direct-init и copy-init 
// набор перегрузок(overload set):
// в первом случае рассматриваются только конструкторы (включая ecxplicit) 
// во втором неявные(implicit) консрукторы и операторы (op wins)
#include <iostream>

struct Foo;
struct Bar;

struct Foo {
    Foo() {}
    Foo(const Bar&) { // *1 преобразовать из Bar в Foo
        std::cout << "Ctor Bar -> Foo" << std::endl;
    }
        operator Bar();
};

struct Bar {
    Bar() {}
    Bar(const Foo&) {
        std::cout << "Ctor Foo -> Bar" << std::endl;
    }
    operator Foo() { //*2 преобразовать из Bar в Foo
        std::cout << "Op Bar -> Foo" << std::endl;
        return Foo{};
    }
}; 

    Foo::operator Bar() {
        std::cout << "Op Foo -> Bar" << std::endl;    
        return Bar{};
    }

int main(){
    Bar b;
     Foo f0;

    Foo f1{b}; //direct-init ctor
    Foo f2 = b; //copy-init ctor vs op, op wins

     Bar b1(f0);
     Bar b2 = f0;
}