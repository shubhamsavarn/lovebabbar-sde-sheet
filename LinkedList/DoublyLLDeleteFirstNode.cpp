#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};
void print(Node* head){
    if(head != NULL){
        cout << head->data << endl;
    }
    print(head->next);
}
Node* DoublyLLDeleteFirstNode(Node* head){
    Node*  temp = head->next;
    head->next = NULL;
    temp->prev = NULL;
    delete head;
    return temp;
    
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->prev = NULL;
    head->next = first;
    first->prev = head;
    first->next = second;
    second->prev = first;
    head = DoublyLLDeleteFirstNode(head);
    print(head);
    return 0;
}
