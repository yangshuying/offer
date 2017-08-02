/*
��֮����˳���ӡ������

��ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ��
�ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�

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
		stack<TreeNode*> sta1;
		stack<TreeNode*> sta2;
		vector<vector<int>> res;
		if (pRoot == NULL)return res;
		sta1.push(pRoot);
		while (!sta1.empty() || !sta2.empty()) {
			vector<int> vec;
			if (!sta1.empty()) {
				while (!sta1.empty()) {
					TreeNode *p = sta1.top();
					vec.push_back(p->val);
					sta1.pop();
					if (p->left != NULL) {
						sta2.push(p->left);
					}
					if (p->right != NULL) {
						sta2.push(p->right);
					}
				}
				res.push_back(vec);
			}
			else if (!sta2.empty()) {
				while (!sta2.empty()) {
					TreeNode *p = sta2.top();
					vec.push_back(p->val);
					sta2.pop();
					if (p->right != NULL) {
						sta1.push(p->right);
					}
					if (p->left != NULL) {
						sta1.push(p->left);
					}
				}
				res.push_back(vec);
			}
		}
		return res;
	}

};