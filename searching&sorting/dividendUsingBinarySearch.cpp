#include <iostream>
#include <vector>

using namespace std;

int main(){
    int divisor,dividend,index,reminder;

    cout << "Please enter divisor" << endl;
    cin >> divisor;
    cout << "Please enter the dividend" << endl;
    cin >> dividend;

    int start = 0, end = dividend, mid = start + (end-start)/2;

    while(start<=end){
        if(abs(mid*divisor) == abs(dividend)){
            index = mid;
            break;
        }
        else if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
        }else {
            index = mid;
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    if((divisor>0 && dividend>0)||(divisor<0 && dividend<0)){
        cout << "the quotient" << index;
    } else {
        cout << "the quotient" << -index;
    }
}
