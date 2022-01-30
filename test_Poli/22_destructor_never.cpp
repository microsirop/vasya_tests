#include<iostream>

class A{
public:
    A(){}
    ~A(){
        std::cout << "D!\n";
    }
};

int main(){
    {
        A* pa = new A;
        //delete pa;
    }
    
    return 0;
}
