#include <iostream>
#include <cstring>

class String {
private:
    size_t sz = 0;
g
public:
    String() = default; // генерирует дефолтный конструктор даже если уже есть другие

    //хороший стиль:
    String(size_t sz, char ch):sz(sz), str(new char[sz]) {
        memset(str, ch, sz);
    }
    //плохой стиль
/*
    String(size_t sz, char ch) { // конструктор заполнения всей стоки одним символом
        this->sz = sz;
        str = new char[sz];
        memset(str, ch, sz);
    }
*/
    String(const String& s) { //коструктор копирования
        sz =s.sz;
        str = new char[sz];
        memcpy(str, s.str, sz);
    }

    /* делегирующий констуктор - коструктор  выраженный через уже имеющийся конструктор (since С++11)
    String(const String& s):String(s.sz, 0) { //коструктор копирования
        memcpy(str, s.str, sz);
    }
    */


    String(const std::initializer_list<char>& lst):sz(lst.size()), str(new char[sz]) { // c++11
        std::copy(lst.begin(),lst.end(), str);
    }
    //плохой стиль:
    /*String(const std::initializer_list<char>& lst) { // c++11
        sz = lst.size();
        str = new char[sz];
        std::copy(lst.begin(),lst.end(), str);
    }*/

    String& operator=(String new_s){
        swap(new_s);
        return *this;
    }
    /*
    String& operator=(const String& s){
        String new_s = s; // конструктор копирования
        swap(new_s); // обмен меставми указателей на поля new_s и s
        return *this; // на выходе уничтожится new_s, под ним лежит то что лежало по s
    }
    */
    void swap(String& s){
        std::swap(str, s.str);
        std::swap(sz, s.sz);
    }
    // copy-paste
    // String& operator=(String&s){    // перегрузка оператора присваивания - принимает ссылку на String и возвращает ссылку на String(самого себя)
    //     if(this==&s) return *this;  // для того чтобы не было дополнительной копии и возможно было многое присваивание
    //     delete[] str;            
    //     sz = s.sz;
    //     str = new char[sz];
    //     memcpy(str, s.str, sz);
    //     return *this;
    // }



    ~String(){
        delete[] str;
    }
};

int main(){
    String s(10, 'a');
    String a{'1', '2', '3'};
    String ss = s;
    return 0;
    {
        String s = s;
    }
}