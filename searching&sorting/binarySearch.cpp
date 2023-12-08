#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,0};

    int start=0,end=arr.size(),mid;
    int x;
    cout << "Enter the element to find :";
    cin >> x; 
    while(end > start){
        mid = start + (end - start)/2;
        if(arr[mid] < x){
            start = mid;
        }else if(arr[mid] > x){
            end = mid;
        }else {
            cout << "The element is found at :" << mid ;
            return mid;
        }
    }
}