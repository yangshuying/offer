/*
��ʵ��һ�������������ж�һ�Ŷ������ǲ��ǶԳƵġ�ע�⣬���һ��������ͬ�˶������ľ�����ͬ���ģ�������Ϊ�ԳƵġ�

��һ��������������Զ����������
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
