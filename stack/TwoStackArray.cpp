#include <iostream>

using namespace std;

class Stack
{

public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = 0;
        top2 = size-1;
    }

    void push1(int item)
    {
        if (top2 - top1 == 1)
        {
            cout << "The stack 1 is overflowed" << endl;
        }
        else
        {
            arr[top1] = item;
            top1++;
        }
    }

    void push2(int item)
    {
        if (top2 - top1 == 1)
        {
            cout << "The stack 2 is overflowed" << endl;
        }
        else
        {
            arr[top2] = item;
            top2--;
        }
    }

    void pop1(int main)
    {
        if (top1 == -1)
        {
            cout << "The stack 1 is underflow" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(int main)
    {
        if (top2 == size)
        {
            cout << "The stack 2 is underflow" << endl;
        }
        else
        {
            arr[top2] = 0;
            top1++;
        }
    }

    void print()
    {
        cout << endl;
        cout << "Printing elements" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int
main()
{

    Stack s(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push2(323);
    s.push2(3);
    s.print();

    return 0;
}
