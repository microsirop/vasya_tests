#include <iostream>

struct A {
    A(){
        std::cout<<"constuct";
    }

        // ###1 - работает!
    void func(const A&);
    void anotherFunc(){
        func(A());// разобраться с временным объектом !!!
    }

        // ###2 - ошибка  
/*
    void func(A&);
    void anotherFunc(){
        const A a;
        func(a);//  error: binding reference of type 'A&' to 'const A' discards qualifiers
    }
*/
    // ###3
    /*void func(const A&); // работает
    void anotherFunc(){
        A a;
        func(a);//  undefined reference to `func(A const&)'
    }*/

};





int main(){
    void anotherFunc();
    return 0;
}