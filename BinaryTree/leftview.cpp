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
int maxlevel = 0;
void printleftview(Node* root,int level){
    if(root == NULL){
        return;
    }
    if(level > maxlevel){
        cout << root->data <<endl;
        maxlevel = level;
    }
    printleftview(root->left,level+1);
    printleftview(root->right,level+1);
    
}
void printlevel(Node* root){
    printleftview(root,1);
}
int main() {
    Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	printlevel(root);
}
