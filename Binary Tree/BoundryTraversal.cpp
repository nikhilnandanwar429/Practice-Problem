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

int height(node* root){
    if(root == NULL ){
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left , right) + 1;
    return ans;

}

void traverseLeft(node* root, vector<int> &ans){
    //base case
    if(root == NULL || (root->left == NULL && root -> right == NULL))
        return ;

    ans.push_back(root -> data);

    if(root -> left)
        traverseLeft(root -> left , ans);

    else    
        traverseLeft(root -> right, ans);
}

void traverseLeaf(node * root, vector<int> &ans){
    //base case
    if(root == NULL)
        return;
    
    if(root -> left == NULL && root -> right == NULL){
        ans.push_back(root -> data);
        return ;
    }

    traverseLeaf(root -> left , ans);
    traverseLeaf(root ->right , ans);
}

void traverseRight(node *root , vector<int> &ans){
    //base case
    if(root == NULL || (root->left == NULL && root -> right == NULL))
        return ;

    if(root -> right)
        traverseRight(root -> right , ans);
    else
        traverseRight(root -> right , ans);
    
    //wapas agaye
    ans.push_back(root -> data);
}

vector<int> boundary(node *root){
    vector<int> ans;
    if(root == NULL)
        return ans;
    
    ans.push_back(root -> data);

    //left part print/store
    traverseLeft(root ->left , ans);

    //Traverse Leaf Nodes
    //Left Subtree
    traverseLeaf(root -> left , ans);
    //Right Subtree
    traverseLeaf(root -> right , ans);

    //Traverse Right Part
    traverseRight(root -> right , ans);

    return ans;
}

int main()
{
    node* root = NULL;

    //creating a Tree
    root = buileTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    //level order
    //cout<<"Printing data for level order traversal output "<<endl;
    //levelOrderTraversal(root);

    cout<< "Height ==> " << height(root) <<endl;

} 