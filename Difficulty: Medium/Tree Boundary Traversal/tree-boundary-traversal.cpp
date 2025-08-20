class Solution {
  public:
    vector<int>res;
    bool isLeaf(Node* root)
    {
        if(root==NULL)return false;
        if(root->left==NULL && root->right==NULL)return true;
        return false;
    }
    void addLeftBoundry(Node* root)
    {
        Node* curr = root->left;
        while(curr){
            
        if(!isLeaf(curr))res.push_back(curr->data);
        if(curr->left)curr=curr->left;
        else curr=curr->right;
            
        }
      
    } 
    void addRightBoundry(Node* root)
    {
        Node* curr = root->right;
        stack<int>tempstack;
        while(curr)
        {
            if(!isLeaf(curr))tempstack.push(curr->data);
            if(curr->right)curr=curr->right;
            else curr=curr->left;
            
        }
        while(!tempstack.empty())
        {
            res.push_back(tempstack.top());
            tempstack.pop();
        }

    }
    void addLeaves(Node* root)
    {
        if(root==NULL)return;
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        addLeaves(root->left);
        addLeaves(root->right);
    }
    vector<int> boundaryTraversal(Node *root) {
        if(root==NULL)return res;
        if(!isLeaf(root))res.push_back(root->data);
        addLeftBoundry(root);
        addLeaves(root);
        addRightBoundry(root);
        return res;
    }
};