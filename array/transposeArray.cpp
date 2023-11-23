#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[3][3],updatedArr[3][3];

    int rows = 3;
    int columns = 3;

    // cout << "Please enter the elements";
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin >> arr[i][j] ;
        }
    }

    cout << "The entered array :" << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << arr[i][j] <<" ";
            // updatedArr[j][i] == arr[i][j] ;
        }
     cout << " " << endl;
    }
    // Traversing array
    cout << "Printing the elements" << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            // int val = arr[i][j];
            // cout << val << endl;
            updatedArr[j][i] = arr[i][j];
            // cout << updatedArr[j][i];
            // cout << updatedArr[i][j];
        }
    }

    cout << "Printing the elements" << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            // updatedArr[j][i] == arr[i][j] 
            cout << updatedArr[i][j] << " ";
        }
        cout << " " << endl;
    }


}