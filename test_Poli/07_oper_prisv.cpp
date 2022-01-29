#include <iostream>

class A {
public:
    int x;
    void print_x(){
        std::cout<<x;
    }
    A(){}
    A(int x){
        this->x = x;
    }
};

int main(){
    A a1, a2;
    a1.x = 5;
    a2 = a1;//оператор присваивания
    a2.print_x();
    //A a3(a1); - конструктор копирования
    // A a3 = a1; - конструктор копирования
    return 0;
}