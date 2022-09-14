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
int searchInLinkedList(Node* head,int value){
    int pos = 1;
    while(head->data != value){
        pos++;
        head = head->next;
    }
    return pos;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(55);
    head->next = first;
    first->next = second;
    second->next = third;
    cout << searchInLinkedList(head,55);
    return 0;
}
