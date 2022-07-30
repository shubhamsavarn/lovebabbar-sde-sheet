#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};
int getmaximum(Node* root){
    int maxc = 0;
    if(root == NULL){
        return 0;
    }else{
        int a = root->data;
        int b = max(getmaximum(root->left),getmaximum(root->right));
        maxc = max(a,b);
    }
    return maxc;
}
int main() {
	
	Node *root=new Node(20);
	root->left=new Node(80);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	cout<<getmaximum(root);
}
