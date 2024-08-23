#include <iostream>
#include <vector>

using namespace std;

int countCoin(int c[], int amount, int size)
{
    if (amount == 0)
    {
        return 0;
    }
    if (amount < 0)
    {
        return INT_MAX;
    }
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        int ans = countCoin(c, amount - c[i],size);
        if(ans != INT_MAX){
            mini = min(mini, ans+1);
        }
    }
    return mini;
}
int main()
{
    int arr[] = {1,2,3};
    int target = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    int val = countCoin(arr, target,size);
    cout << val << endl;
    return val;
}