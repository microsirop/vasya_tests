#include <iostream>

using std::cout;

class A {
    int m_a;
public:
    A(int a = 0){ m_a = a;};
    A& operator+=(const A& r){
        return *this;
    };
};

int main() {
    A a1(1), a2(2);
    a2 +=33;
    return 0;
}