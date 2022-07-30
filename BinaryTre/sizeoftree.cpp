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
int countsize(Node* root){
    int count = 0;
    if(root == NULL){
        return count;
    }else{
        return (1 + countsize(root->left) + countsize(root->right));
    }
    return count;
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->right=new Node(60);
	
	cout<<countsize(root);
}
