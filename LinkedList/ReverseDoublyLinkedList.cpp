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
void ReverseADll(Node* head){
    if(head == NULL or head->next == NULL){
        return NULL;
    }
    Node* curr = head;
    Node* prev = NULL;
    while(head != NULL){
        prev = head->prev;
        head->prev = head->next;
        head->next = prev;
        head = head->prev;
    }
    return prev->prev;
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
    head = ReverseADll(head);
    print(head);
    return 0;
}
