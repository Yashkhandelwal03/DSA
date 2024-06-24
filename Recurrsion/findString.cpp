#include <iostream>

using namespace std;

bool findElement(string l,char t,int len, int i){
    if(i>len){
        return false;
    }

    if(l[i] == t){
        return true;
    }
    return findElement(l,t,len,i+1);
}
int main(){
    string l = "Welcometopark";
    int len = l.length();
    int i = 0;
    char t = 'z';

    bool foundChar = findElement(l,t,len,i);
    if(foundChar){
        cout << "found element in the string" << endl;
    }else{
        cout << "Not found element in the string" << endl;
    }
    return 0;
}