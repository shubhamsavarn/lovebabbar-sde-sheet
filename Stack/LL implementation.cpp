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
struct Stack{
    Node* head;
    int size;
    Stack(){
        head = NULL;
        size = 0;
    }
    void push(int x){
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }
    int peek(){
        return head->data;
    }

};
int main(){
    Stack s;
    s.push(2);
    s.push(5);
    s.push(6);
    cout << s.peek();
    return 0;
}
