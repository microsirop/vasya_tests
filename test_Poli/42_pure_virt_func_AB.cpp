#include <iostream>

class A{
    public:
    // virtual void VF(){ // работает без переопределения в дочернем классе
    //     std::cout <<"VF inside A\n";
    // }
    virtual void VF() = 0; //  в троке 17 будет  error: invalid new-expression of abstract class type 'B'
};

class B: public A{
    public:
    virtual void VF(){
        std::cout <<"VF inside B\n";
    }
    //virtual void VF() = 0; //CE

};

int main(){
    //B* pB = new A; //error: invalid conversion from 'A*' to 'B*' [-fpermissive]
    //pB->VF();
    A* pA = new B;
    pA->VF();
    return 0;
}
