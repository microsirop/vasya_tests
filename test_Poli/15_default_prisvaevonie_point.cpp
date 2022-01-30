#include <iostream>

class Point{
    int x, y;
public:
    Point(int,int){

    }
};

int main(){
    // Point pt1(1,1);
    // pt1=2; //error: no match for 'operator=' (operand types are 'Point' and 'int')
    // Point pt1(1,1);
    // pt1 = Point(2,2); //- вызывает автоматический оператор присваивания!
    Point pt1(1,1), pt2(2,2);
    pt1 = pt2; // - вызывает автоматический оператор присваивания!
    return 0;
}