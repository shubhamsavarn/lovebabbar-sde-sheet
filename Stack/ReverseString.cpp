#include <bits/stdc++.h>
using namespace std;
int main(){
    string ch = "shubham";
    stack<char> st;
    for(int i=0;i<ch.length();i++){
        char s = ch[i];
        st.push(s);
    }
    string ans = "";
    while(!st.empty()){
        char x = st.top();
        ans.push_back(x);
        st.pop();
        
    }
    cout << ans;
    return 0;
}
