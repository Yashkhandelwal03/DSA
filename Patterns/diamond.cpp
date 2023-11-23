#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 9; i++)
    {
        if (i < 5)
        {
            for (int j = 0; j < 5 - i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < i + 1; k++)
            {
                cout << "*";
            }
            for (int l = 0; l<i ; l++){
                cout << "*";
            }
            cout << " " << endl;
        }
        else
        {
            for (int a = 0; a <= i-4; a++)
            {
                cout << " ";
            }
            for (int b = 0; b < 9 - i; b++)
            {
                cout << "*";
            }
            for (int b = 0; b < 9 - i - 1; b++)
            {
                cout << "*";
            }
            cout << " " << endl;
        }
    }
}