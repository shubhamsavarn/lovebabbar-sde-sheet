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
    Node* temp = head;
    do{
        cout << temp->data<<endl;
        temp = temp->next;
    }
    while(head != temp);
}
Node* deleteKNodeBegin(Node* head,int k){
    Node* curr =head;
    for(int i =0;i < k-2;i++){
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
    
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    second->next = head;
    head = deleteKNodeBegin(head,2);
    
    print(head);
    return 0;
}
