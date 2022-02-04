#include <iostream>

//exeptions ans type conversion

struct Base{

};

struct Derived: public Base {

};

void f(){
    throw Derived();
}

int main(){

    try {
        f();
    } catch (double x) {
        std::cout << "caught double\n";
    } catch (long long x) {
        std::cout << "caught long longle\n";
    } catch (unsigned int x) {
        std::cout << "caught unsigned int\n";
    } catch (char x) {
        std::cout << "caught char\n";
    } catch (int x) {
        std::cout << "caught int\n";
    } catch (Base x) {
        std::cout << "caught Base\n";
    } 
}