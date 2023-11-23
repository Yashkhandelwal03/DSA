#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr(10);

    cout << "Enter the array of 0's and 1's" << endl;

    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }
    int end = 0,variable; 
    for(int j=0;j<arr.size();j++){
        if(arr[j] == 1){
            for(int k = j+1;k<arr.size();k++){
                if(arr[k] == 0){
                    variable = arr[j];
                    arr[j] = arr[k];
                    arr[k] = variable;
                }
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i];
    }

}