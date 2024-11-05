#include<iostream>
#include<queue>

using namespace std;

void print(queue<int> &s){
    while(s.size() != 0){
        cout << s.front() << endl;
        s.pop();
    }
}

void reverseQueue(queue<int> &k){
    if(k.empty()){
        return;
    }
    int top = k.front();
    k.pop();
    reverseQueue(k);
    k.push(top);
}

int main(){
    queue<int> k;
    k.push(10);
    k.push(20);
    k.push(30);
    k.push(40);
    k.push(50);

    reverseQueue(k);
    cout << "After" << endl;
    print(k);
}