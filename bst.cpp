#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left ;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL ;
    }
};
Node* insert(Node* root , int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(val<root->data){
        root->left = insert(root->left , val);
    }else{
        root->right  = insert(root->right , val);
    }
    return root;
}

Node* buildBST (int arr[] , int n){
    Node* root=NULL;
    for(int i=0; i<n ; i++){
        root = insert(root , arr[i]);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool searchKey(Node* root , int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }

    if(root->data > key){
        return searchKey(root->left , key);
    }else{
        return searchKey(root->right ,key);
    }
}
void printInRange(Node* root , int st , int end){
    if(root == NULL){
        return;
    }
    if(st<=root->data && root ->data <=end){
        cout<<root->data <<" ";
        printInRange(root->left ,st ,end);
        printInRange(root->right , st, end);
    }
    else if(root->data <st){
        printInRange(root->right , st , end);
    }else{
        printInRange(root->left , st , end);
    }
}


int main(){
    // int arr[6] = {5,1,3,4,2,7};
    int arr2[9] = {8,5,3,1,4,6,10,11,14};
    // Node* root = buildBST(arr ,6);
    Node* root = buildBST(arr2 , 9);
    // inorder(root);
    // cout<<searchKey(root , 43);
    printInRange(root , 5 ,12);
    return 0;
}
