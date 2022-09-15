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
Node* SortedInsert(Node* head,int num){
    Node* curr = head;
    while(curr->next->data < num){
        curr = curr->next;
    }
    Node* temp = new Node(num);
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(3);
    Node* second = new Node(4);
    head->next = first;
    first->next = second;
    second->next = head;
    head = SortedInsert(head,2);
    
    print(head);
    return 0;
}
