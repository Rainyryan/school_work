#include <iostream>
using namespace std;

struct Node
{
	int key, height;
	struct Node *left, *right;

	long size;
};

int height(struct Node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

long size(struct Node *N)
{
	if (N == NULL)
		return 0;
	return N->size;
}

struct Node* newNode(int key)
{
	struct Node* node = new Node;
	node->key = key;
	node->left = node->right = NULL;
	node->height = node->size = 1;
	return(node);
}

struct Node *rightRotate(struct Node *y)
{
	struct Node *x = y->left;
	struct Node *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = max(height(y->left), height(y->right))+1;
	x->height = max(height(x->left), height(x->right))+1;

	y->size = size(y->left) + size(y->right) + 1;
	x->size = size(x->left) + size(x->right) + 1;

	return x;
}

struct Node *leftRotate(struct Node *x)
{
	struct Node *y = x->right;
	struct Node *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = max(height(x->left), height(x->right))+1;
	y->height = max(height(y->left), height(y->right))+1;

	x->size = size(x->left) + size(x->right) + 1;
	y->size = size(y->left) + size(y->right) + 1;

	return y;
}

int getBalance(struct Node *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}

struct Node* insert(struct Node* node, int key, long *result)
{
	if (node == NULL)
		return(newNode(key));

	if (key < node->key)
	{
		node->left = insert(node->left, key, result);

		*result = *result + size(node->right) + 1;
	}
	else
		node->right = insert(node->right, key, result);

	node->height = max(height(node->left), height(node->right)) + 1;
	node->size = size(node->left) + size(node->right) + 1;

	int balance = getBalance(node);

	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}

int main()
{
    int N,a;
    cin>>N;
    struct Node *root = NULL;
    long IN = 0;
    while(N--) {
        cin>>a;
        root = insert(root, a, &IN);
    }
    cout<<IN%524287<<'\n';   
}

