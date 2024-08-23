#include <iostream>
using namespace std;

void reverseString(string str,int len,int i){
    if(i>=len){
        return;
    }
    reverseString(str,len,i+1);
    cout << str[i];
}
int main(){
    string str = "Hey!! What is up ?";
    int len = str.size();
    int i = 0;
    reverseString(str,len,i);
    return 0;
}