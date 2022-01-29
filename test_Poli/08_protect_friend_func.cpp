#include <iostream>

class A{
    int m_x;
protected:
    int m_y;

};

class B: public A{
    int m_b;

    friend void F(B& b);
    public:
    void put_m_bxy(int b){
        m_b = b;
        m_y = b;
        //m_x = b;
    }
};

void F(B& b){
    //std::cout << b.m_b ; - private object of B - работает
    std::cout << b.m_y; // работает т.к. это поле стало private(было protected в A) в B и доступкно для дружественной фунции
    // std::cout << b.m_x; // private поля родителя не доступны для дочернего класса

}

int main(){
    B b;
    b.put_m_bxy(5);
    F(b);
    return 0;
}