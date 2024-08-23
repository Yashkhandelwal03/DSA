#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function (interface)
    virtual void makeSound() = 0;

    // Non-virtual function with implementation
    void sleep() {
        cout << "The animal is sleeping." << endl;
    }
};

// Derived class from abstract class
class Dog : public Animal {
public:
    // Overriding the pure virtual function
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

int main() {
    // Animal a; // This would be an error because you cannot instantiate an abstract class

    Dog myDog;
    myDog.makeSound(); // Output: Woof! Woof!
    myDog.sleep();     // Output: The animal is sleeping.

    return 0;
}
