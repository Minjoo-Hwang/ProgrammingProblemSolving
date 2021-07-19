/*
난이도 : 3
백준 5639. 이진 검색 트리.

처음 root 를 지정해줄 때, 새로운 node struct를 지정해줘야 한다.

참고 ) tree.h를 include 하면 기존의 이진트리 구조를 사용할 수 있다.
*/

#include <iostream>
#include <vector>

using namespace std;


struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* makebst(Node *root, int in)
{
    if (root == NULL){
        root = new Node();
        root->data = in;
        root->left = NULL;
        root->right = NULL;
    }else if(in <= root->data)
        root->left = makebst(root->left, in);
    else
        root->right = makebst(root->right, in);
    
    return root;
}

void postorder(Node* root){
    if(root->left!=NULL)
        postorder(root->left);
    if(root->right != NULL)
        postorder(root->right);
    cout<<root->data<<endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Node *root = NULL;
    int input;
    while (cin >> input)
    {
        if(input == EOF) break;
        root = makebst(root, input);
    }

    postorder(root);

    return 0;
}