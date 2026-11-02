class Solution {
public:
    int findSecondMinimumValue(TreeNode* root)
    {
        int first = root->val;
        int second = -1;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();

            if (node->val > first)
            {
                if (second == -1 || node->val < second)
                {
                    second = node->val;
                }
            }

            if (node->left)
            {
                q.push(node->left);
            }

            if (node->right)
            {
                q.push(node->right);
            }
        }

        return second;
    }
};