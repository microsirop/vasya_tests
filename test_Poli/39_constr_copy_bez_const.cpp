#include <iostream>

class A{
    int m_x;
public:
    A(int x=0){
        m_x = x;
        std::cout<<m_x<<"\n";
    }
    // A(A){ //error: invalid constructor; you probably meant 'A (const A&)'
    // }
    A(A&a){
        m_x = a.m_x;
        std::cout<<m_x<<"\n";
    }
    A(const A&a) {
        m_x = a.m_x;
        std::cout<<m_x<<" const \n";
    }

    // A(const A&a) const{ //error: constructors may not be cv-qualified
    //     m_x = a.m_x;
    //     std::cout<<m_x<<" const \n";
    // }
};

int main(){
    A a(4);
    A b = a;
    return 0;
}