#include <bits/stdc++.h>
using namespace std;
class stack{
    int *arr;
    int top;
    int size;
    stack(int size){
        this->size = size;
        arr[size];
        top = -1;
    }
    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "stack is overflow";
        }
    }
    void pop(){
        if(top > 0){
            top--;
        }else{
            cout << "stack is empty";
        }
    }
    int peek(){
        if(top > 0){
            return arr[top];
        }else{
            return -1;
        }
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};
int main(){
    stack st(9);
    st.push(10);
    st.push(10);
    cout << st.peek();
    return 0;
    
}
