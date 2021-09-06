#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(node * &head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    //otherwise

    node * n = new node(data);
    n->next=head;
    head = n;
}

void printLL(node * head){
    while(head!=NULL){
        cout << head->data<<" ";
        head = head-> next;
    }
    cout << endl;

}

int main(){
    node* head = NULL;

    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);

    printLL(head);



    return 0;
}