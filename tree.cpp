#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildTree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
        // cout<<"Good";
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    //root
    cout<<root->data<<" ";
    //left
    preorder(root->left);
    //right
    preorder(root->right);
}
void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    //find left
    inorder(root->left);
    //out root
    cout<<root->data << " ";
    //find right
    inorder(root->right);
}
void postorder(Node* root){
    if (root == NULL){
        return;
    }
    //left
    postorder(root->left);
    //right
    postorder(root->right);
    //root
    cout<<root->data<<" ";
}
int height(Node* root){
    if(root == NULL){
        return 0 ;
    }
    int leftHt= height  (root->left);
    int rightHt= height (root->right);

    int currHt = max(leftHt , rightHt)+1;

    return currHt;

}
int countNode(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftc = countNode(root->left);
    int rightc= countNode(root -> right);

    return  leftc + rightc + 1 ;
}
int sumNode(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftsum = sumNode(root->left);
    int rightsum = sumNode(root->right);
    int currSum =  root->data + leftsum + rightsum;
    cout <<currSum<<endl;
    return currSum;
}
int diameter(Node* root){
    if (root==NULL){
        return 0;
    }

    int currDia = height(root->left)+height(root->right)+1;
    int leftDia = diameter(root->left);
    int rightDia = diameter(root->right);

    return max(currDia, max(leftDia , rightDia));
}
pair<int ,int> diameter2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    //diameter , height;
    pair<int,int> leftInfo = diameter2(root->left);
    pair<int,int> rightInfo = diameter2(root->right);

    int currDia = max(leftInfo.second  , rightInfo.second)+1;
    int finalDia= max(currDia, max(leftInfo.first , rightInfo.first));
    int finalHt = max(leftInfo.second , rightInfo.second)+1;

    return make_pair(finalDia , finalHt);
}
bool isIden(Node* root1 , Node* root2){
    if (root1==NULL && root2==NULL){
        return true;
    }else if(root1 ==NULL || root2==NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return isIden(root1->left  , root2->left) && isIden(root1->right , root2->right);
}

bool isSubtree(Node*root , Node* subRoot){
    if(root == NULL && subRoot == NULL){
        return true;
    }else if(root == NULL ||  subRoot ==NULL){
        return false;
    }
    if(root ->data == subRoot->data){
        //identical
        if(isIden(root , subRoot)){
            return true;
        }
    }
    int leftSub = isSubtree(root->left , subRoot);
    if(!leftSub){
        return isSubtree(root->right , subRoot);
    }
    return true;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);
    // cout << "root =" << root->data;
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<"Hight = "<< height(root);
    // cout<< sumNode(root);
    // cout<< countNode(root);
    // cout<< diameter(root);
    // cout<<diameter2(root).first;
    // cout<<isSubtree(root , subroot);
    return 0;
}

