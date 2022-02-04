#include <iostream>

class A{
public:
    A(){
        std::cout << "A()\n";
    }
    void f(){
        std::cout << "f\n";
    }
};

int main(){
    //A *a = new A; //.- утечка памяти если не освободить: delete a;
    //A a; //good
    //A *pa = &A(); //error: taking address of temporary [-fpermissive]
    //A a = A(); // good
    A *pa;
    {
        A a;
        pa =&a;
    }
    pa->f();
    return 0;
}