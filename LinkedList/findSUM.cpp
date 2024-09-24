//Single linked list

#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* nxt;

    Node(){
        this->data = 0;
        this->nxt = NULL;
    }

    Node(int x){
        this->data = x;
        this->nxt = NULL;
    }
};

void Print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data ;
        temp = temp->nxt;
    }
}

Node* ReverseList(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = head;
    while(forward != NULL){
        forward = forward->nxt;
        curr->nxt = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* AddNodes(Node* Rev1, Node* Rev2){
    if(Rev1 == NULL){
        return Rev2;
    }
    if(Rev2 == NULL){
        return Rev1;
    }
    Node* temp1 = Rev1;
    Node* temp2 = Rev2;
    Node* finalVal = NULL;
    int sum,upFront = 0;
    while(temp1 != NULL || temp2 != NULL){
        if(temp1 == NULL){
            sum = temp2->data + upFront;
        }else if(temp2 == NULL){
            sum = temp1->data + upFront;
        }else{
            sum = temp1->data + temp2->data + upFront;
        }
        if(sum >= 10){
            upFront = sum/10;
            sum = sum%10;
        }
        cout << sum << endl;
        cout << upFront << endl;
        Node* temp = new Node();
        temp->data = sum;
        temp->nxt = finalVal;
        finalVal = temp;
        if(temp1 != NULL) temp1 = temp1->nxt;
        if(temp2 != NULL) temp2 = temp2->nxt;
    }
    if(upFront > 0 && sum){
        Node* temp = new Node();
        temp->data = upFront;
        temp->nxt = finalVal;
        finalVal = temp;
    }
    Print(finalVal);
    return finalVal;
}

int main(){
    Node* A = new Node(6);
    Node* B = new Node(7);
    Node* C = new Node(9);
    Node* D = new Node(4);
    Node* E = new Node(5);

    A->nxt = B;
    B->nxt = C;
    D->nxt = E;

    Node* Rev1 = ReverseList(A);
    Node* Rev2 = ReverseList(D);
    Print(A);
    Print(D);
    cout << "After reversal" << endl;
    Print(Rev1);
    Print(Rev2);
    Node* sum = AddNodes(Rev1,Rev2);
    // Print(sum);
    return 0;
}