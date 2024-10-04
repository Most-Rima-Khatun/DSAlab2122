#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;

    Node(int item)
    {
        key = item;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* node, int key){
    if(node == NULL)
    return new Node(key);

    if(node->key == key)
    return node;
    if(node->key < key)
    node->right = insert(node->right,key);
    else
    node->left = insert(node->left,key);
    return node;

}

void inorder(Node* root)
{
    
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
       
    }
    
     
}
void preorder(Node* root)
{
    if(root != NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}

int main()
{
    Node* root = new Node(50);
    
    root = insert(root,40);
    root = insert(root,30);
    root = insert(root,80);
    root = insert(root,25);
    root  = insert(root,45);
    
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
    return 0;
}
