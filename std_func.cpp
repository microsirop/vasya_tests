#include <iostream>
#include <functional>

using std::function;
using std::cout;

void func(){
    cout << "function\n";
}

int main(){

    function<void()> f;
    f = func;
    f();

    return 0;
}
