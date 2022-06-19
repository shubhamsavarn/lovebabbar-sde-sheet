stack<int> check(stack<int> st,int x){
    if(st.empty()){
        st.push(x);
        return st;
    }
    int m = st.top();
    st.pop();
    check(st,x);
    st.push(m);
};
