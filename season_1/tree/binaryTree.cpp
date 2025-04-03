#include <bits/stdc++.h>
using namespace std;

class BinaryNode {
private:
    char data;
    BinaryNode* left;
    BinaryNode* right;
public:
    BinaryNode(char data = NULL, BinaryNode* left = nullptr, BinaryNode* right = nullptr) {
        this-> data = data;
        this-> left = left;
        this-> right = right;
    }

};

class BinaryTree {
private:
    BinaryNode* root;
public:
    BinaryTree() {this-> root = nullptr; }
    void setRoot(BinaryNode* node){this->root = node; }
};

int main() {
    BinaryTree tree;
    BinaryNode *d = new BinaryNode('D',nullptr,nullptr);
    BinaryNode *e = new BinaryNode('E',nullptr,nullptr);
    BinaryNode *b = new BinaryNode('B',d,e);
    BinaryNode *f = new BinaryNode('F',nullptr,nullptr);
    BinaryNode *c = new BinaryNode('C',f,nullptr);
    BinaryNode *a = new BinaryNode('A',b,c);
    tree.setRoot(a);
