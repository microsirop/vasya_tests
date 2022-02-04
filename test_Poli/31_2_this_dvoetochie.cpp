#include <iostream>

class A {
    int m_a;
public:
    void f(int m_a){
        (*this).m_a = m_a;
    }
    void ff(int m_a){
        A::m_a = m_a;
    }
    void fff(int a){
        this->m_a = a;
    }
    void fu(int a){
        m_a = a;
    }
    void f_get_a(){
      std::cout<< this->m_a << std::endl;  
    }
};

int main(){
    A a;
    a.f(5);
    a.fu(6);
    a.f_get_a();
    return 0;
}