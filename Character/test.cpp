#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout << "Enter the name of emp: " << endl;
    getline(cin,str);
    // cin >> str;
    cout << str;
    return 0;
}