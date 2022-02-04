#include <iostream>

class A{
    int x:8;
public:
    void set_x(int x){
        this->x = x;
    }
    void get_x(){
        //std::cout << sizeof(x) << " " << x; //  error: invalid application of 'sizeof' to a bit-field
        //std::cout  << x++; // разрещенная операция, в выводе перебирает по символам ASCII
       // int &r = x; //error: cannot bind bitfield '((A*)this)->A::x' to 'int&'
       //int *p = &x; //error: attempt to take address of bit-field
        std::cout << x;
    }
};

int main(){
    A a;
    a.set_x(42);
    a.get_x();
    return 0;
}