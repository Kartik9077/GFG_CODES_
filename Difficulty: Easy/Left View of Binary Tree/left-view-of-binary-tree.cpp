/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        vector<int> result;
        if(root == NULL) return result;
        
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            
            for(int i=0; i<n; i++){
                Node* node = q.front();
                q.pop();
                if(i==0){
                    result.push_back(node->data);
                }
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return result;
    }
};