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
    //base case
    if(root == NULL ){
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left , right) + 1;
    return ans;

}

pair<bool , int> isSumTreeFast(node *root){
    //base case
    if(root == NULL){
        pair<bool , int> p = make_pair(true , 0);
        return p;
    }

    //leaf node
    if(root -> left == NULL && root -> right == NULL){
        pair<bool , int > p = make_pair(true , root -> data);
        return p;
    }

    pair<bool , int> leftAns = isSumTreeFast(root -> left);
    pair<bool , int> rightAns = isSumTreeFast(root -> right);

    bool left = leftAns.first;
    bool right = rightAns.first;

    int leftSum = leftAns.second;
    int rightSum = rightAns.second;

    bool condn = root -> data == leftSum + rightSum;

    pair<bool , int> ans;
    if(left && right && condn){
        ans.first = true;
        ans.second = root -> data + rightSum + leftSum;
    }

    else{
        ans.first = false;
    }

    return ans;
}

bool isSumTree(node * root){
    return isSumTreeFast(root).first;
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