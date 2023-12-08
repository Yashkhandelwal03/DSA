#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr{1,2,4,4,4,4,4,8,9};

    int start=0,end=arr.size(),mid;
    int target = 4;

    //initialising it with -1 toget some output.
    int index = -1;
    while(end>start){
        mid=(start+end)/2;
        //if mid element matched 
        if(arr[mid] == target){
            //storing the element
            index = mid;
            //searching in the left because of first occurence
            end = mid-1;
        }
        if(arr[mid] < target){
            // Similar moving to right
            start = mid+1;
        }
        if(arr[mid] > target){
            // Similar moving to left
            end = mid-1;
        }
    }
    cout << "Element found at" << index;
}