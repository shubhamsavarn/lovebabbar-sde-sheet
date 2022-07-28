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
void postorder(Node* data){
    if(data != NULL){
        postorder(data->left);
        postorder(data->right);
        cout << data->data << " ";
    }
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	postorder(root);
}
