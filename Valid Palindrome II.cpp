#include <bits/stdc++.h>
using namespace std;
bool  checkchar(char c){
    if((c >= 'a' and c <= 'z' || c >='A' and c<='Z' || c >= '0' and c <= '9')){
        return 1;
    }
    return 0;
}
char lowercase(char c){
    if((c >= 'a' and c <= 'z'|| c >= '0' and c <= '9')){
        return c;
    }else{
        char temp;
        temp = c-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(string st){
    int s = 0;
    int e = st.length()-1;
    while(s <= e){
        if(st[e] != st[s]){
            return 0 ;
        }
        s++;
        e--;
    }
    return 1;
}
int main(){
    string s = "maaM";
    string temp = "";
    for(int j =0;j<=s.length()-1;j++){
        if(checkchar(s[j])){
            temp.push_back(s[j]);
        }
    }
    for(int i=0;i<=temp.length()-1;i++){
        temp[i] = lowercase(temp[i]);
    }
    cout << checkpalindrome(temp);
    return 0;
    
}
