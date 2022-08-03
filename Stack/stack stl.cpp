#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() <<endl;
    while(s.empty() == false){
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}
