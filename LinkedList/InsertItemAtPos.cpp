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
Node* insertAtPosition(Node* head,int data,int pos){
    if(head->next == NULL){
        Node* temp = new Node(data);
        temp->next = head;
        return head;
    }
    Node* curr = head;
    for(int i =0;i <pos-2 && head->next != NULL;i++){
        curr = curr->next;
        
    }
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;
    return head;

}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    
    head = insertAtPosition(head,55,3);
    print(head);
    return 0;
}
