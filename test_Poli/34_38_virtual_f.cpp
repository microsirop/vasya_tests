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
    //A* pA = new B; // компилятро думает, что это объект A,  но указатель смещен к полям объекта B (созданного при помощи оператора new)
    //pA->VF();
    B b;
    A&r = b;
    r.VF();

    //A* pAm = new A; //error: invalid new-expression of abstract class type 'A' 
    //pAm->VF();
    //A a; //error: cannot declare variable 'a' to be of abstract type 'A'
    return 0;
}
