#include <bits/stdc++.h>
using namespace std;
struct Stack{
    int size;
    int top;
    int* arr;
    Stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(top == size-1){
            cout << "stack is empty"<<endl;
        }else{
            top++;
            arr[top] = data;
        }
    }
    void pop(){
        if(size == -1){
            cout << "stack is empty"<<endl;
        }
        int garbage = arr[top];
        top--;
    }
    int capacity(){
        return top+1;
    }
    int peek(){
        return arr[top];
    }
};


int main(){
    Stack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    s.pop();
    cout<<s.capacity()<<endl;
    cout<<s.peek()<<endl;
    return 0;
}
