#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }

};

static int idx=-1;
Node *buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node *currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;
}

void preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void postorder(Node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";


}
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}

void levelOrder(Node *root){
    queue<Node *> q;
    if(root==NULL){
        return;
    }
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }
        else{
            cout<<curr->data<<" ";
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }

    }
}

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftHt=height(root->left);
    int rightHt=height(root->right);

    int currHt=max(leftHt,rightHt)+1;
    return currHt;
}

int count(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftCount=count(root->left);
    int rightCount=count(root->right);

    return leftCount+rightCount+1;
}

int sumOfNode(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftSum=sumOfNode(root->left);
    int rightSum=sumOfNode(root->right);

    return leftSum+rightSum+root->data;


}
int main()
{
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node *root=buildTree(nodes);

    // cout<<root->data<<" ";

    // cout<<"preorder: ";
    // preorder(root);
    // cout<<endl;

    // cout<<"inorder: ";
    // inorder(root);
    // cout<<endl;

    // cout<<"postorder: ";
    // postorder(root);
    // cout<<endl;

    // cout<<"Level order: "<<endl;
    // levelOrder(root);


    cout<<"height of tree: "<<height(root)<<endl;

    cout<<"Total nodes: "<<count(root)<<endl;

    cout<<"Total sum of nodes: "<<sumOfNode(root)<<endl;
    
    return 0;
}