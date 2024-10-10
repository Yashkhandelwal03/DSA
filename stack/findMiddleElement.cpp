#include <iostream>
#include <stack>
using namespace std;

void findMiddleElement(stack<int> &s,int &size){
    if(s.size() == 0){
        cout << "No element in stack" << endl;
        return;
    }

    if(s.size() == (size/2)+1){
        cout << "Middle Element" << s.top() << endl;
        return;
    }

    int temp = s.top();
    //removing top element
    s.pop();
    findMiddleElement(s,size);
    //Adding top element, reverting it back to same position.
    s.push(temp);
}


int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);

    int sizeofArr = s.size(); 
    findMiddleElement(s,sizeofArr);
    
    return 0;
}
