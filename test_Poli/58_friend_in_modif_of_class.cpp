#include <iostream>

class A {
    int x;
public:
    
    A(int x){
        this->x = x;
    }
    friend void F(A&);
private:
    friend void F2(A&);
protected:
    friend void F3(A&);
};

void F(A& a){
    std::cout << a.x << " F1\n";
}

void F2(A& a){
    std::cout << a.x << " F2\n";
}

void F3(A& a){
    std::cout << a.x << " F3\n";
}

int main(){
    A a(5);
    F(a);
    F2(a);
    F3(a);
    return 0;
}