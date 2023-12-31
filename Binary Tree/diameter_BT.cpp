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

int diameter(node* root){
    if(root  == NULL){
        return 0;
    }

    int op1 = diameter(root -> left);
    int op2 = diameter(root -> right);
    int op3 = height(root -> right) + height(root -> left) + 1;

    int ans = max(op1 , max(op2 , op3) );
    return ans;
}

pair<int , int> diameterFast(node* root){
    if(root  == NULL){
        pair<int , int> p = make_pair(0,0);
        return p;
    }

    pair<int , int> left = diameterFast(root -> right);
    pair<int , int> right = diameterFast(root -> left);

    //.first = diameter
    //.second = height
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int , int> ans ;
    ans.first = max(op1 , max(op2 , op3));
    ans.second = max(left.second , right.second) + 1;
    
    return ans;
}

int diameterPair(node* root){
    return diameterFast(root).first;
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

    

}