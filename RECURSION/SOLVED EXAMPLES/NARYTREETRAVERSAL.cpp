#include <bits/stdc++.h>

using namespace std;

// NODE TEMPLATE
struct node{
    node** leaves;
    int data;
};

// PREORDER TRAVERSAL
void preorder(node* root, int nDegree){
    if(root!=nullptr){
        cout << root->data << " ";
        for(int i=0;i<nDegree;i++){
            preorder(root->leaves[i],nDegree);
        }
    }
}

// POSTORDER TRAVERSAL
void postorder(node *root, int nDegree)
{
    if (root != nullptr)
    {
        for (int i = 0; i < nDegree; i++)
        {
            postorder(root->leaves[i], nDegree);
        }
        cout << root->data << " ";
    }
}

// INORDER TRAVERSAL

// THIS INORDER WORKS BY PRINTING THE LEFTMOST NODE [1ST CHILDNODE]
// THEN IT'LL PRINT THE ROOT
// THEN IT'LL PRINT ALL THE REMAINING [2-N TH CHILDNODE]
//              1
// 
//      2       3       4
//   
// 5    6    7
// 
// INORDER TRAVERSAL => 5 2 6 7 1 3 4
// 


void inorder(node *root, int nDegree)
{
    if (root != nullptr)
    {
        for (int i = 0; i < nDegree; i++)
        {
            inorder(root->leaves[i], nDegree);
            if(i==0){
                cout << root->data << " ";
            };
        }
    }
}

node *nodeCreation(int data, int nDegree)
{
    node *Node = new node;
    Node->data = data;
    Node->leaves = new node*[nDegree];
    for(int i=0;i<nDegree;i++){
        Node->leaves[i] = nullptr;
    }
    return Node;
}

node* treeCreation(int nDegree){
    queue<node*> storeElementAdddress;
    int data = 0;
    cin>>data;
    node* root = new node;
    root->data = data;
    root->leaves = new node* [nDegree];
    storeElementAdddress.push(root);
    //GETTING THE ELEMENTS FOR ALL THE N-CHILDREN
    while(storeElementAdddress.size()){
        node* temp = storeElementAdddress.front();
        for(int i=0;i<nDegree;i++){
            cin>>data;
            if(data!=-1){
                temp->leaves[i] = nodeCreation(data, nDegree);
                storeElementAdddress.push(temp->leaves[i]);
            }
            else{
                temp->leaves[i] = nullptr;
            }
        }
        storeElementAdddress.pop();
    }
    return root;
}

int main(){
    cout << "Enter the degree of your tree: ";
    int nDegree = 0;
    cin>>nDegree;
    cout << "Enter the elements of your 'n'ary tree:\n";
    node* root = treeCreation(nDegree);
    cout << "\n --- PREORDER TRAVERSAL ---\n";
    preorder(root,nDegree);
    cout << "\n --- INORDER TRAVERSAL ---\n";
    inorder(root,nDegree);
    cout << "\n --- POSTORDER TRAVERSAL ---\n";
    postorder(root,nDegree);
}