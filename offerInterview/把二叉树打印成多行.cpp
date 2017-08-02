/*
把二叉树打印成多行

从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
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
	vector<vector<int> > Print(TreeNode* pRoot) {

		vector<TreeNode*> tvec;
		vector<vector<int>>res;
		if (pRoot == NULL)return res;
		tvec.push_back(pRoot);
		while (tvec.size() != 0) {
			int length = tvec.size();
			vector<int> vec;
			for (int i = 0;i<length;i++) {
				TreeNode* p = tvec[0];
				vec.push_back(p->val);
				if (p->left != NULL)tvec.push_back(p->left);
				if (p->right != NULL)tvec.push_back(p->right);
				tvec.erase(tvec.begin());
			}
			res.push_back(vec);
		}
		return res;
	}

};