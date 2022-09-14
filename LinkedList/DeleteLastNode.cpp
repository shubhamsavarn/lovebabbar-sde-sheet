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
Node* delteLastNode(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = NULL;
    delete temp1;
    return head;
}
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    
    head = delteLastNode(head);
    print(head);
    return 0;
}
