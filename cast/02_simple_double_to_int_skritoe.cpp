#include <iostream>

namespace diff{
    char x[32];
    char *p;
    size_t xx;
    size_t *x_x;
    size_t y[32];
}

int main(){
    double d = 10.1;
    double dd = d;
    int i = 1;
    d +=i; // в реальности i остается int, в выражении создается временный объект 
    double tmp = static_cast<double>(i); // - имитация временного объекта приведенного к double
    dd +=i;
    std::cout << d << std::endl;
    std::cout << dd << std::endl;
    diff::p = diff::x;// так можно
    // diff::x = diff::p; - наоборот нельзся

    std::cout << sizeof(diff::x) << std::endl;
    std::cout << sizeof(diff::p) << std::endl; // в 64-битной архитектуре указатели имеют размер 8 байт (независимо от того на что они указывают)
    std::cout << alignof(diff::x) << std::endl; // alignment requirement - требование выравнивания(всегда является степенью двойки)
    std::cout << alignof(diff::p) << std::endl << std::endl;// выравнивание для указателя будет так же 8 байтным 
                                                            // - это значит, завести еще один указатель можно будет 
                                                            //на расстоянии 8 байт от уже созаднного ранее
    std::cout << sizeof(diff::x_x) << std::endl;
    std::cout << sizeof(diff::y) << std::endl; 
    std::cout << sizeof(diff::xx) << std::endl << std::endl;
    
    std::cout << alignof(diff::x_x) << std::endl;
    std::cout << alignof(diff::y) << std::endl;
    std::cout << alignof(diff::xx) << std::endl;
    return 0;
}