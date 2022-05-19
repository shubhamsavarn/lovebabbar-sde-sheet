#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        next = NULL;
    }
    
};
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<endl;
        temp = temp->next;
    }
}
Node* Reverse(Node* head,int k){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;
    int cnt = 0;
    while(curr != NULL,k>cnt ){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next != NULL){
    head->next = Reverse(next,k);
    }
    return prev;
}
int main(){
    Node* head = new Node(2);
    Node* first = new Node(4);
    Node* second = new Node(9);
    Node* third = new Node(10);
    head ->next = first;
    first ->next = second;
    second->next = third;
    Node* newhead = Reverse(head,2);
    print(newhead);
    return 0;
    //
    
}
