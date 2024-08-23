#include <iostream>

using namespace std;

class Animal{
   public :
     int age;
     string name;
     void eat(){
        cout << "I am eating rice" << endl;
     }
     void sleep(){
        cout << "I will go to sleep" << endl;
     }
      void setWeight(int weight){
         this->weight = weight;
      }
      int getWeight(){
         return weight;
      }
   
   //default constructor
   Animal(){
      cout << "default constructor called" << endl;
   }

   //parametrised constructor
   Animal(int age){
      this->age = age; 
      cout << "parametrised constructor called" << endl;
   }

   //copy constructor
   Animal(Animal a){
      cout << "Inside copy constructor" << endl;
   }

   private :
      int weight;
};

int main(){

   //Static object

    Animal a(20);
   //  a.age = 90;
   //  a.name = "ramesh";
   //  cout << a.age << endl;
   //  cout << a.name << endl;
   //  a.eat();
   //  a.sleep(); 
   //  a.setWeight(20);
   //  cout << a.getWeight() << endl;

   //Dynamic Object
   Animal* b = new Animal(20);
   Animal d = b;
   //  (*a).age = 90;
   //  (*a).name = "ramesh";

   //  //Alternate method

   //  a -> age = 60;
   //  a -> name = "Kaushal";
   //  cout << a.age << endl;
   //  cout << a.name << endl;
   //  a.eat();
   //  a.sleep(); 
   //  a.setWeight(20);
   //  cout << a.getWeight() << endl;

    return 0;
}