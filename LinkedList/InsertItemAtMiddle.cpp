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
Node* insertionAtMiddle(Node* prev_node ,int d){
    Node* temp = new Node(d);
    temp->next = prev_node;
    prev_node = 
}
int main(){
    Node* head = new Node(1);
    //first->next = second;
    head = pushNode(head,7);
    print(head);
    return 0;
}
