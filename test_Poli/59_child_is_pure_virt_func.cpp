#include <iostream>

class A{
    public:
    // virtual void VF(){ // работает без переопределения в дочернем классе
    //     std::cout <<"VF inside A\n";
    // }
    virtual void VF(){
        std::cout <<"VF inside A\n";
    }
};

class B: public A{
    public:

    virtual void VF() = 0; 

};

int main(){
    //B* pB = new A; //error: invalid conversion from 'A*' to 'B*' [-fpermissive]
    //pB->VF();
    //A* pA = new B; //error: invalid new-expression of abstract class type 'B'
    //pA->VF();
    A* pA = new A; // работает, не понятно где это применимо, чтобы наследник был абстрактным классом
    pA->VF();
    //A a; // тоже работает
    //a.VF();
    //B b; //error: cannot declare variable 'b' to be of abstract type 'B'
    return 0;
}
