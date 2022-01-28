#include <iostream>

// exeptions
using std::cout;
struct S{
    S(){}
    S(const S&){
        cout << "copy\n";
    }
    ~S(){
        std::cout << "destruct\n";
    }
};

void f(){
    S s;
    throw s;
}

void g(){
    try{
        f();
    } catch (S &s) {
        cout << "caught in g\n";
        throw;
    }
}

int main(){
    try{
        g();
    } catch (const S &s) {
        cout << "caught in main\n";
    }
}