/*请实现一个函数，用来判断一颗二叉树是不是对称的。
注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。
让二叉树的左子树永远等于右子树
*/




/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
*/
class Solution {
public:
	bool isEqual(TreeNode *pRoot1, TreeNode *pRoot2) {
		if (pRoot1 == NULL&&pRoot2 == NULL)return true;
		if (pRoot1 == NULL&&pRoot2 != NULL)return false;
		if (pRoot1 != NULL&&pRoot2 == NULL)return false;
		if (pRoot1->val == pRoot2->val) {
			if (isEqual(pRoot1->right, pRoot2->left) && isEqual(pRoot1->left, pRoot2->right)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == NULL) {
			return true;
		}
		if (isEqual(pRoot->left, pRoot->right)) {
			return true;
		}
		return false;
	}

};
