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
    int pop(){
        if(head == NULL){
            cout << "it's already empty"<<endl;
        }
        int res = head->data;
        Node* temp = head;
        head = head->next;
        delete(temp);
        size--;
        return res;
    }
    bool empty(){
        if(head == NULL){
            return true;;
        }else{
            return false;
        }
        
        
    }

};
int main(){
    Stack s;
    s.push(2);
    s.push(5);
    s.push(6);
    s.push(77);
    while(s.empty() != 1){
        cout << s.peek()<<endl;
        s.pop();
    }
    return 0;
}
