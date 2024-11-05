#include <iostream>
using namespace std;

class CirQueue{
        public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size) {
                this->size = size;
                arr = new int[size];
                front = -1;
                rear = -1;
        }

        void push(int data) {
                //Queue Full

                //single element case - > first element

                //circular nature

                //normal flow
                //TODO: add one more condition in the QUEUE FULL if block
                cout << "The front data" << front << endl;
                cout << "The back data" << rear << endl;
                if((front == 0 && rear == size-1) || rear == front-1) {
                        cout << "Q is full, cannot insert" << endl;
                }
                else if(front == -1) {
                        front = rear = 0;
                        arr[rear] = data;
                }
                else if(rear == size-1 && front != 0 ) {
                        rear = 0;
                        arr[rear] = data;
                }
                else{
                        rear++;
                        arr[rear]= data;
                } 
        }

        void pop() {
                //empty check
                //single element
                //circular nature
                //normal flow
                if(front == -1) {
                        cout << "Q is empty , cannot pop" << endl;
                }
                else if (front == rear) {
                        arr[front] = -1;
                        front = -1;
                        rear = -1;  
                }
                else if(front == size-1) {
                        front = 0;
                }
                else {
                        front++;
                }
        }

        void print(){
                while (front != rear)
                {
                        cout << arr[front] << " ";
                        front++;
                }
        }

};

int main() {

  CirQueue c(8);
  c.push(25);
  c.push(12);
  c.push(21);
  c.push(23);
  c.push(27);
  c.push(32);
  c.push(25);
  c.push(24);
  c.push(27);
  c.push(32);
  c.push(25);
  c.push(24);
  c.print();

  return 0;
}