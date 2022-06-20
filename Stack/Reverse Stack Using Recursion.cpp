void inbottom(stack<int> &stack,int x){
    if(stack.empty()){
        stack.push(x);
    }
    int y = stack.top();
    stack.pop();
    inbottom(stack,y); 
    
}
void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int m = stack.top();
    stack.pop();
    reverseStack(stack);
    inbottom(stack,m);
}
