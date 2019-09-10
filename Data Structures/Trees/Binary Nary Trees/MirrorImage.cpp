/*
 * Created by shubhgkr on 10/09/19.
 * https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/mirror-image-2/description/
 */

#include <iostream>
#include <stack>

struct Node {
	Node *left;
	Node *right;
	int data;
};

Node *arr[1001];
int parent[1001];

Node *createNode(int data) {
	Node *node = new Node();
	node->data = data;
	return node;
}

Node *insertNode(Node *node, int data, char ch) {
	if (node == nullptr)
		node = createNode(data);
	else if (ch == 'L') {
		node->left = insertNode(node->left, data, ch);
		arr[data] = node->left;
	} else {
		node->right = insertNode(node->right, data, ch);
		arr[data] = node->right;
	}
	return node;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, q;
	std::cin >> n >> q;
	Node *node = nullptr;
	node = insertNode(node, 1, ' ');
	parent[1] = 1;
	arr[1] = node;
	while (--n) {
		int par, child;
		char dir;
		std::cin >> par >> child >> dir;
		insertNode(arr[par], child, dir);
		parent[child] = par;
	}
	while (q--) {
		std::stack<char> st;
		int value;
		std::cin >> value;
		Node *curr = node;
		while (value != 1) {
			int par = parent[value];
			curr = arr[par];
			st.push(curr->left != nullptr && curr->left->data == value ? 'R' : 'L');
			value = curr->data;
		}
		while (!st.empty() && curr != nullptr) {
			curr = st.top() == 'L' ? curr->left : curr->right;
			st.pop();
		}
		std::cout << (curr == nullptr ? -1 : curr->data) << "\n";
	}
	return 0;
}