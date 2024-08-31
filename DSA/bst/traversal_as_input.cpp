#include <iostream>

using namespace std;
  
// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// BST class
class BinarySearchTree {
public:
    BinarySearchTree() : root(nullptr) {}

    // Function to insert a value into the BST
    void insert(int value) {
        root = insert(root, value);
    }

    // Function to perform in-order traversal
    void inorderTraversal() const {
        inorderTraversal(root);
        cout << endl;
    }

    // Function to perform pre-order traversal
    void preorderTraversal() const {
        preorderTraversal(root);
        cout << endl;
    }

    // Function to perform post-order traversal
    void postorderTraversal() const {
        postorderTraversal(root);
        cout << endl;
    }

private:
    Node* root;

    // Helper function to insert a value into the BST
    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }
        return node;
    }

    // Helper function for in-order traversal
    void inorderTraversal(Node* node) const {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

    // Helper function for pre-order traversal
    void preorderTraversal(Node* node) const {
        if (node != nullptr) {
            cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    // Helper function for post-order traversal
    void postorderTraversal(Node* node) const {
        if (node != nullptr) {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->data << " ";
        }
    }
};

int main() {
    BinarySearchTree bst;
    int n, value;

    cout << "Enter the number of values: ";
    cin >> n;

    cout << "Enter " << n << " values to insert into the BST:\n";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        bst.insert(value);
    }

    cout << "Enter the type of traversal you want to perform (1 for In-Order, 2 for Pre-Order, 3 for Post-Order): ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "In-Order Traversal: ";
            bst.inorderTraversal();
            break;
        case 2:
            cout << "Pre-Order Traversal: ";
            bst.preorderTraversal();
            break;
        case 3:
            cout << "Post-Order Traversal: ";
            bst.postorderTraversal();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
