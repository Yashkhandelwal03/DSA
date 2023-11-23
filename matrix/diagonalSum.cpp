#include <iostream>

using namespace std;

int main(){
    int n = 3;
    int mat[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                sum += mat[i][j];
            }
            else if(i+j == n-1){
                sum += mat[i][j];
            }
        }
    }
    cout << "Sum" << sum << endl;
}