#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num;
    cout << "Enter the element" << endl;
    cin >> num;
    int end = num, start = 0, mid = start + ((end - start) / 2);
    double index;

    while (start <= end)
    {
        // cout << "teh mid value" << mid << endl;
        if (mid * mid < num)
        {
            start = mid + 1;
        }
        if (mid * mid > num)
        {
            // cout << "Inside middle element" << endl;
            index = mid;
            end = mid - 1;
        }
        if (mid * mid == num)
        {
            index = mid;
            break;
        }
        mid = start + ((end - start) / 2);
    }

    cout << "Please enter precision" << endl;
    int precision;
    cin >> precision;
    double size = 0.1;
    for (int i = 0; i < precision; i++)
    {
        // cout << "Please enter precision" << endl;
        double j = index - size;
        if (j * j > num)
        {
            // cout << "entering precision table" << j * j << num << endl;
            while (j * j > num)
            {
                // cout << "Please enter precision" << j * j << endl;
                index = j;
                j -= size;
            }
        }
        size = size / 10;
    }
    cout << "The required sqrt" << index;
}