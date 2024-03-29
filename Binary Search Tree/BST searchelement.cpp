#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int d){
        key = d;
        left = right = NULL;
    }
};
bool search(Node* root,int k){
    if(root == NULL){
        return false;
    }
    if(root->key == k){
        return true;
    }else if(root->key > k){
        return search(root->left,k);
    }else{
        return search(root->right,k);
    }
    
}
int main(){
    Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int x=100;
	cout << search(root,x);
    return 0;
}
