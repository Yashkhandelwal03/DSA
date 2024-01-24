#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[13] = {1, 1, 2, 2, 3, 3,  4, 4, 600, 600,3, 4, 4};

    int start = 0;int end = 13;int index;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (start == end)
        {
            index = start;
            break;
        }
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                index = mid;
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                end = mid - 1;
            }
            else
            { 
                index = mid;
                start = mid + 1;
            }
        }
    }

    cout << "The required index" << index;

}