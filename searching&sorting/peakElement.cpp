#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,6,7,9};

    int start=0,end=arr.size(), mid=(start+end)/2,index;

    // while(end>start){
    //     if(arr[mid] > arr[mid+1]){
    //         index = mid;
    //         end = mid-1;
    //     }
    //     if(arr[mid] < arr[mid+1]){
    //         start = mid+1;
    //     }
    //     mid=(start+end)/2;
    // }
    while(end>start){
        if(arr[mid] < arr[mid+1]){
            // index = mid;
            start = mid+1;
        }else {
            end = mid;
        }
        // if(arr[mid] < arr[mid+1]){
        //     start = mid+1;
        // }
        mid=(start+end)/2;
    }
    cout << "The element is  found at " << index;
}