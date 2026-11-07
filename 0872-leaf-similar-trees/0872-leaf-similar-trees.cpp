class Solution {
public:
    void findLeaves(TreeNode* root, vector<int>& answer)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            answer.push_back(root->val);
            return;
        }
        findLeaves(root->left, answer);
        findLeaves(root->right, answer);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> answer1;
        vector<int> answer2;

        findLeaves(root1, answer1);
        findLeaves(root2, answer2);
        return answer1 == answer2;
    }
};