#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node(const char* data) : data(data) {}
public:
    const char* data;
    vector<Node*> children;
};

Node* CreateTree() {
    Node* root = new Node("개발실");
    {
        Node* node = new Node("디자인");
        root->children.push_back(node);
        {
            Node* leaf = new Node("전투");
            node->children.push_back(leaf);
        }
        {
            Node* leaf = new Node("경제");
            node->children.push_back(leaf);
        }
        {
            Node* leaf = new Node("스토리");
            node->children.push_back(leaf);
        }
    }
    {
        Node* node = new Node("프로그래밍");
        root->children.push_back(node);
        {
            Node* leaf = new Node("클라");
            node->children.push_back(leaf);
        }
        {
            Node* leaf = new Node("서버");
            node->children.push_back(leaf);
        }
        {
            Node* leaf = new Node("엔진");
            node->children.push_back(leaf);
        }
    }
    {
        Node* node = new Node("아트");
        root->children.push_back(node);
        {
            Node* leaf = new Node("배경");
            node->children.push_back(leaf);
        }
        {
            Node* leaf = new Node("캐릭터");
            node->children.push_back(leaf);
        }
    }

    return root;
}

void PrintTree(Node* node, int depth = 0) {
    if (node == nullptr) return;

    for (int i = 0; i < depth; i++) {
        cout << " ";
    }
    cout << node->data << endl;

    for (Node* child : node->children) {
        PrintTree(child, depth + 1);
    }
}