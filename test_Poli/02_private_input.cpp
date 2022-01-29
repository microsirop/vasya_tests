#include <iostream>

class A {
    int m_a;
public:
    void f(int m_a){
        (*this).m_a = m_a;
    }
    void f_get_a(){
      std::cout<< this->m_a << std::endl;  
    }
};

int main(){
    A a;
    a.f(5);
    a.f_get_a();
    return 0;
}