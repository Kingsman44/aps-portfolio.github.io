#include<bits/stdc++.h>
using namespace std;

const int k = 3;

// A structure to represent node of kd tree
struct Node
{
	int point[k]; // To store k dimensional point
	Node *left, *right;
};

// A method to create a node of K D tree
struct Node* newNode(int arr[])
{
	struct Node* temp = new Node;

	for (int i=0; i<k; i++)
		temp->point[i] = arr[i];

	temp->left = temp->right = NULL;
	return temp;
}

// Inserts a new node and returns root of modified tree
Node *insertRec(Node *root, int point[], unsigned depth)
{
	if (root == NULL)
		return newNode(point);

	unsigned cd = depth % k;

	if (point[cd] < (root->point[cd]))
		root->left = insertRec(root->left, point, depth + 1);
	else
		root->right = insertRec(root->right, point, depth + 1);

	return root;
}

// Function to insert a new point with given point in
// KD Tree and return new root.
Node* insert(Node *root, int point[])
{
	return insertRec(root, point, 0);
}

// A utility method to determine if two Points are same
bool arePointsSame(int point1[], int point2[])
{
	for (int i = 0; i < k; ++i)
		if (point1[i] != point2[i])
			return false;

	return true;
}

// Searches a Point represented by "point[]" in the K D tree.
bool searchRec(Node* root, int point[], unsigned depth)
{
	if (root == NULL)
		return false;
	if (arePointsSame(root->point, point))
		return true;

	unsigned cd = depth % k;

	if (point[cd] < root->point[cd])
		return searchRec(root->left, point, depth + 1);

	return searchRec(root->right, point, depth + 1);
}

// Searches a Point in the K D tree.
bool search(Node* root, int point[])
{
	return searchRec(root, point, 0);
}

// Driver program to test above functions
int main()
{
	struct Node *root = NULL;
	int points[][k] = {{3, 6, 9}, {17, 15, 10}, {13, 15, 18}, {6, 12, 7},
					{9, 1, 11}, {2, 7, 1}, {10, 19, 13}};

	int n = sizeof(points)/sizeof(points[0]);

	for (int i=0; i<n; i++)
		root = insert(root, points[i]);

	int point1[] = {10, 19, 13};
	(search(root, point1))? cout << "Found\n": cout << "Not Found\n";

	int point2[] = {12, 19, 13};
	(search(root, point2))? cout << "Found\n": cout << "Not Found\n";

	return 0;
}
