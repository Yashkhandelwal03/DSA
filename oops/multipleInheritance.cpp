#include <iostream>
using namespace std;

class A {
    public:
    int name;
    virtual void chemistry(){
        cout << "chemistry from class A" << endl;
    }
};

class B {
    public:
    int name;
    void chemistry(){
        cout << "chemistry from class B" << endl;
    }
    void physics(int a){
        cout << "physics from class B" << endl;
    }
};

class C : public B, public A{
    public:
    int name;
    void chemistry(){
        cout << "chemistry from class C" << endl;
    }
    void physics(int a,int b){
        cout << "physics from class C" << endl;
    }
};

int main(){

    C c;
    // Method overloading calling class B
    // c.B::physics(15);
    // Method overloading calling class C
    // c.physics(15,17);

    //This is upcasting where the pointer is of parent class and object is of child class.
    // A* a = new C();
    // a->chemistry();
    return 0;
}