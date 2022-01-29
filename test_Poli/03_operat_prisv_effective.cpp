#include <iostream>

class A {
    int m_a;
public:
    //A operator = (const A&);
    A& operator = (const A&);
};

int main(){

    return 0;
}

// не производит дополнительного копирования в возвращаемом значении