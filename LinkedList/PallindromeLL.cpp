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
        cout << temp->data << endl;
        temp = temp->nxt;
    }
}

Node* reverseList(Node* prev,Node* A){
    if(A == NULL){
        return prev;
    }
    Node* curr = A;
    Node* forward = curr->nxt;
    curr->nxt = prev;
    return reverseList(curr,forward);
}

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL){
        fast = fast->nxt;
        if(fast != NULL){
            slow = slow->nxt;
            fast = fast->nxt;
        }
    }
    return slow;
}

bool findpallindrome(Node* head,Node* tail,Node* mid){
    while(head->data != mid->data && tail->data != mid->data){ 
        if(head->data != tail->data){
            return false;
        }
        head = head->nxt;
        tail = tail->nxt;
    }
    return true;
}

int main(){
    Node* A = new Node(10);
    Node* B = new Node(20);
    Node* C = new Node(30);
    Node* D = new Node(20);
    Node* E = new Node(10);

    A->nxt = B;
    B->nxt = C;
    C->nxt = D;
    D->nxt = E;
    Node* mid = findMid(A);
    Node* midNxt = mid->nxt;
    Node* X = reverseList(mid,midNxt);
    cout << findpallindrome(A,X,mid) << endl;
    // cout << "The x data " << x->data << endl;
    // Print(A);

    delete A;
    delete B;
    delete C;
    delete D;
    delete E;

    return 0;
}