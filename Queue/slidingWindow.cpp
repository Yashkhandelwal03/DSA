#include<iostream>
#include<queue>

using namespace std;

void resolve(int arr[],int size,int k){
    queue<int> q;

    //Creating the window
    for(int i=0;i<k;i++){
        if(arr[i] < 0){
            q.push(i);
        }
    }

    for(int i=k;i<size;i++){
        if(q.empty()){
            cout << 0 << " ";
        }else{
            cout << arr[q.front()] << " ";
        }

        //Inserting an element while removing one

        //removing element
        if((!q.empty()) && (i-q.front() >= k)){
            q.pop();
        }

        // //Inserting element
        if(arr[i] < 0){
            q.push(i);
        }
    }

    //Because we are first printing the result and then 
    if(q.empty()){
            cout << 0 << " ";
    }else{
            cout << arr[q.front()] << " ";
    }
}
int main(){
    int arr[] = {12,-1,-3,4,-15,30,16,28};

    int size = 8;
    int k = 3;

    resolve(arr,size,k);
}


// Time Complexity : O(n) 
// Space Complexity : O(k) --> Space of queue