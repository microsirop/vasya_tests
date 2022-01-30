#include <iostream>

class A{
public:
    static int x;
    A(){
        std::cout<<x++<<" def\n";
    }
    A(int){
        std::cout<<x++<<" int\n";
    }
};
int A::x = 0;
int main(){
    A arr[5] = {0,1,2,3,4};
    A ar[10]; //all def
    A arrr[3]={A(1),A(2)};// last will be def
    A arrrr[2]={A(11),A(22)};

}