#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 7; i++)
    {
        if (i < 4)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < 7-i; j++)
            {
                cout << "*";
            }
        }
        cout << "" << endl;
    }
}