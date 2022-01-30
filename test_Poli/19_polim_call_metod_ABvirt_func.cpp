#include <iostream>

class A {
public:
    virtual void vf(){
        std::cout<<"inside A\n";
    }
};

class B: public A {
public:
    virtual void vf(){
         std::cout<<"\tinside B\n";
    }
};

void Func1(A r){
    std::cout<<"Func1\n";
    r.vf();
}

void Func2(A& r){
    std::cout<<"Func2\n";
    r.vf();
}

void Func3(B r){
    std::cout<<"Func3\n";
    r.vf();
}

void Func4(B& r){
    std::cout<<"Func4\n";
    r.vf();
}


int main(){
    A a;
    B b;
    a.vf();//не полиморфный вызов
    Func1(a);// Func1(b); // компилируется оба варианта, но т.к. передача по значению при передаче объекта класса B происходит средка объекта по типу класса A
    //рабочий вар.:
    Func2(b);// полиморфный вызов - срезка объекта не происходит, т.к. объект передается по ссылке !!!!!!!!!

    Func3(b); // Func3(a); error: could not convert 'a' from 'A' to 'B'
    Func4(b); // Func4(a);  error: invalid initialization of reference of type 'B&' from expression of type 'A'
    return 0;
}