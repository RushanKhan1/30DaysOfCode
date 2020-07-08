#include <iostream>
#include <cstddef>

using namespace std;	

class Node{ //setting up the binary tree
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) { //function for inserting a node
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root){
          if(root == NULL)
            {
                return 0;
            }
            else if(root->left == NULL && root -> right == NULL)
            {
                return -1; //height of an empty tree is -1
            }
            int lheight = getHeight(root->left);//for left subtree.
            int rheight = getHeight(root->right); //for right subtree.
            if(lheight > rheight)
            {
                return lheight + 1;
            }
            else return rheight + 1;
        }

}; //End of Solution

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}