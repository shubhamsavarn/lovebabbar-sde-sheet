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
int main(){
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);
    head->next = first;
    first->next = second;
    second->next = head;
    
    print(head);
    return 0;
}
