//LRN
// ==> Left Right Node
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buileTree(node* root) {
    
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserrting in left of "<< data <<endl;
    root -> left = buileTree(root -> left);

    cout<<"Enter data for inserting in right of "<< data <<endl;
    root -> right = buileTree(root -> right);

    return root;

}

void postorderTraverse(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    postorderTraverse(root -> left);
    
    postorderTraverse(root -> right);

    cout<< root -> data << " ";

}

int main()
{
    node* root = NULL;

    //creating a Tree
    root = buileTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //level order
    // cout<<"Printing data for level order traversal output "<<endl;
    // levelOrderTraversal(root);

    cout<<" Postorder traversal is : ";
    postorderTraverse(root);

}

