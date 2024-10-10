#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> &s){
    while(s.size() != 0){
        cout << s.top() << endl;
        s.pop();
    }
}

void insertSorted(stack<int> &s, int target){
    if(s.empty() || s.top() >= target){
        s.push(target);
        return;
    }
    int top = s.top();
    s.pop();
    insertSorted(s,target);
    s.push(top);
}

void sortElements(stack<int> &s){
    if(s.empty()){
        return;
    }
    int top = s.top();
    s.pop();
    sortElements(s);
    insertSorted(s,top);
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(5);
    st.push(7);
    st.push(9);
    st.push(16);

    sortElements(st);
    print(st);
}