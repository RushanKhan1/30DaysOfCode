#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node* root){ //function for level order traversal or breadth first search
        queue<Node*> q;
        if(root == NULL)
        {
            return;
        }
        q.push(root);
        while(q.empty() != true)
        {
            Node* current = q.front();
            cout << current->data << " ";
            if(current->left != NULL){
                q.push(current->left);
            }
            if(current->right)
            {
                q.push(current->right);
            }
            q.pop();
        }
	}

};//End of class
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin >> T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
  
  
  
  
