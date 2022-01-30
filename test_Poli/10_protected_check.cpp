#include <iostream>


class Base{
public:
    Base(){
        std::cout<< "Base Co\n";
    }
    ~Base(){
        std::cout<< "Base De\n";
    }
protected:
    void check(){
        std::cout << "check\n";
    }
};

class Derived: public Base {
public:
    Derived(){
        std::cout << "Derived Co\n";
    }
    ~Derived(){
        std::cout << "Derived De\n";
    }
    void get_check() {
        this->check();
    }
};

class Contain {
public:
    Base A;
    Contain(){
        std::cout << "Contain Co\n";      
    }
    ~Contain(){
        std::cout << "Contain De\n";
    }
    
    //void get_checkA(){
    //    A.check();
    //}
};


int main(){
    Derived A;
    A.get_check();
    Contain S;
    return 0;
}