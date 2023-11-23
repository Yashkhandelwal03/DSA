#include <iostream>

using namespace std;

int main(){
    int arr[5] = {32,75,67,43,9};

    int max = 0;
    for (int i=0;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest Element = " << max;

}