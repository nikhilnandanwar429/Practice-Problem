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

vector<int> zigZagTraversal(node *root){
    vector<int> result;
    if(root == NULL)
        return result;
    
    queue<node*> q;
    q.push(root);

    bool leftToRight = true;

    while(!q.empty()){

        int size = q.size();
        vector<int> ans(size);

        //level Process
        for(int i=0 ; i<size ; i++){

            node* frontNode = q.front();
            q.pop();

            //Normal Insert or Reverse Insert
            int index = frontNode ? i : size -i -1;
            ans[index] = frontNode -> data;

            if(frontNode -> left)
                q.push(frontNode -> left);
            if(frontNode -> right)
                q.push(frontNode -> right);
        }

        //direction Change
        leftToRight = !leftToRight;

        for(auto i: ans){
            result.push_back(i);
        }
    }
    return result;
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