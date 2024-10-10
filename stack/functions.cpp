#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;

    //Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //Printing elements till empty
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    //We can also find size using s.size() function.
    
    return 0;
}