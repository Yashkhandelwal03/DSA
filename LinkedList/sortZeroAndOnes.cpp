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

//Adding node ahead
Node* findSorted(Node* element){

    Node* zeroTemp = NULL;
    Node* oneTemp = NULL;
    Node* curr = element;
    Node* forward = element;
    while(forward != NULL){
        if(curr->data == 0){
            cout <<"One: " <<curr->data << endl;
            forward = forward->nxt;
            curr->nxt = zeroTemp;
            zeroTemp = curr;
            curr = forward;
        } else{
            cout <<"Two: " << curr->data << endl;
            forward = forward->nxt;
            curr->nxt = oneTemp;
            oneTemp = curr;
            curr = forward;
        }
    }

    Print(zeroTemp);
    Print(oneTemp);

    return zeroTemp;
}


int main(){
    Node* A = new Node(1);
    Node* B = new Node(0);
    Node* C = new Node(0);
    Node* D = new Node(0);
    Node* E = new Node(1);
    Node* F = new Node(0);
    Node* G = new Node(0);
    Node* H = new Node(0);
    Node* I = new Node(1);
    Node* J = new Node(0);
    Node* K = new Node(0);
    Node* L = new Node(0);
    A->nxt = B;
    B->nxt = C;
    C->nxt = D;
    D->nxt = E;
    E->nxt = F;
    F->nxt = G;
    G->nxt = H;
    H->nxt = I;
    I->nxt = J;
    J->nxt = K;
    K->nxt = L;

    Node* zero = new Node(-1);
    Node* one = new Node(-1);

    Node* headT = findSorted(A);
    // int countZero = countValue(A,0);
    // int countOne = countValue(A,1);
    // int countTwo = countValue(A,2);

    return 0;
}