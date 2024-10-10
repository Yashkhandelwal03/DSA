#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> c;

    string s = "Babbar";
    for(int i=0;i<s.size();i++){
        c.push(s[i]);
    } 
    cout << "Original String" << endl;
    cout << s << endl;
     cout << "Reverse String" << endl;
    //Printing elements
    while(!c.empty()){
        cout << c.top() ;
        c.pop();
    }

    return 0;
}