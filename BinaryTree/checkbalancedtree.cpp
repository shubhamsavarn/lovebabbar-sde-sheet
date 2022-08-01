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
int maxsize(Node* root){
    int count= 0;
    if(root == NULL){
        return count;
    }
    return (1 + max(maxsize(root->left),maxsize(root->right)));
}
bool checkbalancedtree(Node* root){
    if(root == NULL){
        return true;
    }
    if(abs(maxsize(root->left) - maxsize(root->right)) <= 1 and checkbalancedtree(root->left) and checkbalancedtree(root->right) ){
        return true;
    }else{
        return false;
    }
}
int main(){
    Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(30);
	root->right->left=new Node(15);
	root->right->right=new Node(20);
	cout << checkbalancedtree(root);
    return 0;
}
