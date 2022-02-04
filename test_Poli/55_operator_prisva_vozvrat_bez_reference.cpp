#include <iostream>

class A{
    int m_a;
public:
    A():m_a(0){
        std::cout <<"A()\n";
    }
    A(int a):m_a(a){
        std::cout <<"A(int a)\n";
    }

    A(const A& a) { //коструктор копирования
        this->m_a = a.m_a; 
        std::cout << "constuctor copy \n";
    }

    A operator=(const A& a){
        this->m_a = a.m_a; 
        std::cout << "operator=\n";
        return *this;
    }
};

int main(){
    A a1(1), a2(2), a3;
    a3 = a2;
    return 0;
}