#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Represents a point in 2D space
struct Point {
    int x, y;
};

// Represents a node in the K-D Tree
struct Node {
    Point point;
    Node* left;
    Node* right;

    Node(const Point& p) : point(p), left(nullptr), right(nullptr) {}
};

// Builds a K-D Tree from a vector of points
Node* buildKDTree(vector<Point>& points, int depth = 0) {
    if (points.empty()) {
        return nullptr;
    }

    int axis = depth % 2;
    sort(points.begin(), points.end(), [axis](const Point& a, const Point& b) {
        return axis == 0 ? a.x < b.x : a.y < b.y;
    });

    int mid = points.size() / 2;
    Node* root = new Node(points[mid]);
    root->left = buildKDTree(vector<Point>(points.begin(), points.begin() + mid), depth + 1);
    root->right = buildKDTree(vector<Point>(points.begin() + mid + 1, points.end()), depth + 1);

    return root;
}

// Performs a rectangular range query on the K-D Tree
void rectangularRangeQuery(Node* root, int x1, int y1, int x2, int y2, vector<Point>& result) {
    if (!root) {
        return;
    }

    if (root->point.x >= x1 && root->point.x <= x2 && root->point.y >= y1 && root->point.y <= y2) {
        result.push_back(root->point);
    }

    if (root->left && x1 <= root->point.x) {
        rectangularRangeQuery(root->left, x1, y1, x2, y2, result);
    }

    if (root->right && x2 >= root->point.x) {
        rectangularRangeQuery(root->right, x1, y1, x2, y2, result);
    }
}

int main() {
    // Example usage
    vector<Point> points = {{2, 3}, {5, 4}, {9, 6}, {4, 7}, {8, 1}, {7, 2}};
    Node* root = buildKDTree(points);

    vector<Point> result;
    rectangularRangeQuery(root, 4, 1, 8, 6, result);

    cout << "Points in the rectangular range:" << endl;
    for (const auto& p : result) {
        cout << "(" << p.x << ", " << p.y << ")" << endl;
    }

    return 0;
}