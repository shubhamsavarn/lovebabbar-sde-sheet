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
Node* insertAtFirst(Node* head,int x){
    Node* temp = new Node(x);
    temp->next = head;
    head = temp;
    return head;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(3);
    Node* second = new Node(4);
    head->next = first;
    first->next = second;
    head = insertAtFirst(head,5); 
    print(head);
    return 0;
}
