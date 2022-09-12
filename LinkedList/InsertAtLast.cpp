#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
void print(Node* head){
    if(head != NULL){
        cout << head->data << endl;
    }
    print(head->next);
}
Node* insertAtLast(Node* head,int x){
    Node* temp = head;
    Node* last = new Node(x);
    while(temp->next != NULL){
        temp = temp->next;
    }
    last->next = temp->next;
    temp->next = last;
    return head;
    
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    
    head = insertAtLast(head,66);
    print(head);
    return 0;
}
