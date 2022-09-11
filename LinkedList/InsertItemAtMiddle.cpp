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
Node* insertionAtMiddle(Node* prev_node ,Node* head,int d){
    Node* temp = new Node(d);
    temp->next = prev_node->next;
    prev_node->next = temp;
    return head;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    
    head = insertionAtMiddle(first,head,5);
    print(head);
    return 0;
}
