#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n=4,m=5;
    int arr[n][m] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int target;
    cout << "Please enter the target element" << endl;
    cin >> target;
    int start = 0, end = n*m-1,mid=start+(end-start)/2,index;

    while(start<=end){
        cout << "Entering the loop" << endl;
        int row = mid/m;
        int column = mid%m;
        cout << "Entering the loop" << arr[row][column] << endl;
        if(arr[row][column] > target){
            end = mid-1;
        } 
        if(arr[row][column] < target){
            start = mid+1;
        }
        if(arr[row][column] == target){
            index = mid;
            break;
        } 
        mid = start+(end-start)/2;
    }
    int row = index/m;
    int column = index%m;
    cout << "Element found at" << row <<","<< column << endl;
}