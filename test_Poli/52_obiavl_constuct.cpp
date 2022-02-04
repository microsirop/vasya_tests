#include <iostream>

class A{
public:
    A(int=0);
    //A(){} 
 

};

A::A(int a){
    std::cout<<"A(int a)\n";
}

int main(){
    A a; // error: call of overloaded 'A()' is ambiguous - двусмысленна
    return 0;
}