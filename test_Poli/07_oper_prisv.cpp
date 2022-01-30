#include <iostream>

class A {
public:
    int x;
    void print_x(){
        std::cout<<x << std::endl;
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
    A a3;
    a3 = A(22);// объект a3 уже создан, поэтому это оператор присваивания (A(22) - синтаксис для временного объекта)
    a3.print_x();
    //A a3(a1); - конструктор копирования
    // A a3 = a1; - конструктор копирования
    return 0;
}