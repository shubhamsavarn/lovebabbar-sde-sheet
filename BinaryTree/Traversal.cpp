#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root){
    cout << "enter the data"<<endl;
    int data;
    cin >>  data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout << "enter the data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout << "enter the data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
    
}
i
int main(){
    Node* root = NULL;
    root = buildTree(root);
    return 0;
}
