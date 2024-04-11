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

vector<int> verticalOrder(node * root){

    map<int , map<int , vector<int>>> nodes;
    queue<pair<node* , pair<int , int>>> q;
    vector<int> ans;

    if(root == NULL)
        return ans;
    
    q.push(make_pair(root , make_pair(0 , 0)));

    while(!q.empty()){
        pair<node* , pair<int , int>> temp = q.front();

        node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode -> data);

        if(frontNode -> left)
            q.push(make_pair(frontNode -> left , make_pair(hd-1 , lvl+1)));

        if(frontNode -> right)
            q.push(make_pair(frontNode -> right , make_pair(hd+1 , lvl+1)));
    }
    for(auto i: nodes){
        for(auto j : i.second){
            for(auto k : j.second){
                ans.push_back(k);
            }
        }
    }
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