#include <iostream>
using namespace std;

class Animal{
    
    protected:
    int age;

    void eat(){
        cout << "eating" << endl;
    }
};

class Dog : public Animal{
    public:

    void print(int age){
        cout << age << endl;
        cout << this -> age;
    } 
};

int main(){
    Dog d1;
    // d1.age = 25;
    // cout << d1.age << endl;
    d1.print(25);

    return 0;
}