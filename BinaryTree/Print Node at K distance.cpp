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
/*int height(Node* root){
    if(root == NULL){
        return 0;
    }else{
        return (max(height(root->left),height(root->right))+1);
    }
}*/
void print(Node* root,int k){
    if(root == NULL){
        return;
    }
    if(k==0){
        cout << root->data<<endl;
    }else{
        print(root->left,k-1);
        print(root->right,k-1);
    }
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	//cout<<height(root);
	print(root,2);
}
