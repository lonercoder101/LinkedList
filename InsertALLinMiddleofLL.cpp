//insert a linked list in middle of another linked list




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

void insertInMiddle(node *&head, node* &head1){
  
  node* fast = head;
  node* slow = head;
  while(fast!=NULL and fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
  }

   node*temp = slow->next;
   slow->next = head1;
   while(head1->next!=NULL)
    head1=head1->next;

    head1->next = temp;

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
    node* head2 =NULL;
    insertAtHead(head2,9);
    insertAtHead(head2,10);
    insertAtHead(head2,11);

    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    printLL(head); cout << '\n';
    printLL(head2);cout << '\n';

    insertInMiddle(head,head2);

    
    cout<<endl;
    
    printLL(head);



    return 0;
}
