#include<iostream>
#include<stack>
using namespace std;

void insertAtEnd(stack<int> &s, int topE){
    if(s.size() == 0){
        s.push(topE);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtEnd(s,topE);
    s.push(temp);
}

void print(stack<int> &s){
    while(s.size() != 0){
        cout << s.top() << endl;
        s.pop();
    }
}

void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    reverseStack(s);
    insertAtEnd(s,top);
}

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);
    print(s);
}