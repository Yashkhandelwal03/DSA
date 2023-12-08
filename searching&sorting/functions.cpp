#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,7,7,7,7,7,7,7,8,9,0};

    //returns boolean
    // int elem_location = binary_search(arr.begin(),arr.end(),7);

    //returns integer
    int lower_bound = std::lower_bound(arr.begin(), arr.end(), 7) - arr.begin();

    //returns integer
    int upper_bound = std::upper_bound(arr.begin(), arr.end(), 7) - arr.begin();

    cout << "Number of occurence" << upper_bound - lower_bound;

    // cout << "Element found at" << elem_location;
}
