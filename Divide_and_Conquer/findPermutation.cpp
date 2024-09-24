#include<iostream>

using namespace std;

void findPermutations(string &s,int i,int l){
    if(i == l){
        cout << s << endl;
        return;
    }
    for(int j = i;j<l;j++){
        swap(s[i],s[j]);
        findPermutations(s,i+1,l);
        //Backtracking - for bringing the string back to original state.
        swap(s[i],s[j]);
    }
}

int main(){
    string s = "abc";
    int i = 0;
    int l = s.size();
    findPermutations(s,i,l);
    return 0;
}