#include <iostream>
//Волшебные очки
/*
class Empty{

};
*/
class Empty{
public:
    Empty(){}
    ~Empty(){}
    Empty(const Empty&){}
    Empty& operator=(const Empty&){
        return *this;
    }
};



int main(){
    Empty m;//создать
    Empty x(m); // скопировать
    m = x; //присвоить
    std::cout << sizeof(m) << std::endl;
    return 0;
}//уничтожить
