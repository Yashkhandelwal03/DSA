// # Question 1

// #include<iostream>
// using namespace std;

// class Vehicle {
//     protected:
//         string make;
//         string model;
//         int year;
//     public:
//         Vehicle(string m, string md, int y) {
//             make = m;
//             model = md;
//             year = y;
//         }
// };

// class Car: public Vehicle {
//     public:
//         void getDetails() {
//             cout << make << " " << model << " " << year << endl;
//         }
// };

// int main() {
//     Vehicle* v = new Car("Toyota", "Camry", 2021);
//     v->getDetails();
//     delete v;
//     return 0;
// }

// # soln

// #include<iostream>
// using namespace std;

// class Vehicle {
//     protected:
//         string make;
//         string model;
//         int year;
//     public:
//         Vehicle(string m, string md, int y) {
//             make = m;
//             model = md;
//             year = y;
//         }
//         virtual void getDetails() = 0;
// };

// class Car: public Vehicle {
//     public:
//         Car (string m, string md, int y) : Vehicle(m,md,y){};
//         void getDetails() {
//             cout << make << " " << model << " " << year << endl;
//         }
// };

// int main() {
//     Vehicle* v = new Car("Toyota", "Camry", 2021);
//     v->getDetails();
//     delete v;
//     return 0;
// }


// 2nd Question

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     double width, height;
//     Shape(double w, double h) {
//         this->width = w;
//         this->height = h;
//     }
// };

// class Rectangle : public Shape {
// public:
//     Rectangle(double w, double h){
//         this->width = w;
//         this->height = h;
//     }
//     double area() {
//         return this->width * this->height;
//     }
// };

// int main() {
//     Rectangle r(5, 4);
//     cout << "Area of the rectangle is: " << r.area() << endl;
//     return 0;
// }

//Answer

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     double width, height;
//     Shape(double w, double h) {
//         this->width = w;
//         this->height = h;
//     }
// };

// class Rectangle : public Shape {
// public:
//     Rectangle(double w, double h) : Shape(w,h){
//         this->width = w;
//         this->height = h;
//     }
//     double area() {
//         return this->width * this->height;
//     }
// };

// int main() {
//     Rectangle r(5, 4);
//     cout << "Area of the rectangle is: " << r.area() << endl;
//     return 0;
// }

// 3rd Question

// class Animal {
// public:
//     string name;
//     Animal() {
//         cout << "Animal Constructor called!" << endl;
//     }
//     ~Animal() {
//         cout << "Animal Destructor called!" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     string breed;
//     Dog(string breed) : Animal() {
//         this->breed = breed;
//         cout << "Dog Constructor called!" << endl;
//     }
//     ~Dog() : ~Animal() {
//         cout << "Dog Destructor called!" << endl;
//     }
// };

// int main() {
//     Dog* dog = new Dog("Poodle");
//     delete dog;
//     return 0;
// }   



// 3rd Answer

// class Animal {
// public:
//     string name;
//     Animal() {
//         cout << "Animal Constructor called!" << endl;
//     }
//     ~Animal() {
//         cout << "Animal Destructor called!" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     string breed;
//     Dog(string breed) : Animal() {
//         this->breed = breed;
//         cout << "Dog Constructor called!" << endl;
//     }
//     ~Dog() {
//         cout << "Dog Destructor called!" << endl;
//     }
// };

// int main() {
//     Dog* dog = new Dog("Poodle");
//     delete dog;
//     return 0;
// }

// Q4


// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     void draw() {
//         cout << "Drawing a shape" << endl;
//     }
// };

// class Circle: public Shape {
// public:
//     void draw(int radius) {
//         cout << "Drawing a circle with radius " << radius << endl;
//     }
// };

// int main() {
//     Circle c;
//     c.draw();
//     return 0;
// }


// Answer 4

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     void draw() {
//         cout << "Drawing a shape" << endl;
//     }
// };

// class Circle: public Shape {
// public:
//     void draw(int radius) {
//         cout << "Drawing a circle with radius " << radius << endl;
//     }
// };

// int main() {
//     Circle c;
//     c.Shape::draw();
//     return 0;
// }


// Q5

// #include <iostream>
// using namespace std;

// class Shape {
//     public:
//         virtual double area() = 0;
//         virtual void display() = 0;
// };

// class Rectangle : public Shape {
//     private:
//         double length;
//         double width;
//     public:
//         Rectangle(double l, double w) {
//             length = l;
//             width = w;
//         }
//         double area() {
//             return length * width;
//         }
//         void display() const {
//             cout << "Rectangle with length " << length << " and width " << width << endl;
//         }
// };

// int main() {
//     Shape* s = new Rectangle(5, 10);
//     cout << "Area of rectangle is: " << s->area() << endl;
//     s->display();
//     delete s;
//     return 0;
// }


// Answer

// #include <iostream>
// using namespace std;

// class Shape {
//     public:
//         virtual double area() = 0;
//         virtual void display() = 0;
// };

// class Rectangle : public Shape {
//     private:
//         double length;
//         double width;
//     public:
//         Rectangle(double l, double w) {
//             length = l;
//             width = w;
//         }
//         double area() {
//             return length * width;
//         }
//         void display() {
//             cout << "Rectangle with length " << length << " and width " << width << endl;
//         }
// };

// int main() {
//     Shape* s = new Rectangle(5, 10);
//     cout << "Area of rectangle is: " << s->area() << endl;
//     s->display();
//     delete s;
//     return 0;
// }