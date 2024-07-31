#include <bits/stdc++.h>
using namespace std;

class BinaryNode {
public:
    char data;
    BinaryNode* left;
    BinaryNode* right;
public:
    BinaryNode(char data = NULL, BinaryNode* left = nullptr, BinaryNode* right = nullptr) {
        this-> data = data;
        this-> left = left;
        this-> right = right;
    }

    char getData() {return this->data; }
    BinaryNode* getLeft(){ return this->left; }
    BinaryNode* getRight(){ return this->right; }

};



class BinaryTree {
private:
    BinaryNode* root;

    void addNode(BinaryNode* node, char parent, char left, char right) {
        if (node == nullptr) return;

        if (node->data == parent) {
            if (left != '.') node->left = new BinaryNode(left);
            if (right != '.') node ->right = new BinaryNode(right);
        } else {
            if (node->left != nullptr) addNode(node->left, parent, left, right);
            if (node->right != nullptr) addNode(node->right, parent, left, right);
        }
    }

    void preorder(BinaryNode* node) {
        if (node != nullptr){
            cout << node->getData();
            preorder(node->getLeft());
            preorder(node->getRight());
        }
    }

    void inorder(BinaryNode* node) {
        if (node != nullptr){
            inorder(node->getLeft());
            cout << node->getData();
            inorder(node->getRight());
        }
    }

    void postorder(BinaryNode* node) {
        if (node != nullptr) {
            postorder(node->getLeft());
            postorder(node->getRight());
            cout << node->getData();
        }
    }
public:
    BinaryTree() {this-> root = nullptr; }
    void setRoot(BinaryNode* node){this->root = node; }
    void setNode(char parent, char left, char right) {
        if (root == nullptr) {
            root = new BinaryNode(parent);
            if (left != '.') {
                root->left = new BinaryNode(left);
            }
            if (right != '.') {
                root->right = new BinaryNode(right);
            } else {
                addNode(root, parent, left, right);
            }
        }
    }

    void preorder() {
        preorder(this->root);
        cout << endl;
    }
    void inorder() {
        inorder(this->root);
        cout << endl;
    }
    void postorder() {
        postorder(this->root);
        cout << endl;
    }

    BinaryNode* getRoot(){ return this-> root; }
};

int main() {
    int n;
    cin >> n;

    BinaryTree tree;

    for (int i = 0; i < n; ++i) {
        char parent, left, right;
        cin >> parent >> left >> right;
        tree.setNode(parent, left, right);
    }

    tree.preorder();
    tree.inorder();
    tree.postorder();


}