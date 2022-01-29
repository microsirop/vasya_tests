#include <iostream>

class A {
public:
    A(void) {
        std::cout << "A()\n";
    }
    A(int){
        std::cout << "A(int)\n";
    }
};


int main(){
    //A a(); - most vexing parse - не может понять это объявление функции или объекта, компилятор считает, что это объявление функции
    A a; // конструктор по умолчанию
    A(5);//второй конструктор :)
    return 0;
}