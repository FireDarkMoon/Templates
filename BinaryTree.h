#pragma once
#ifndef BINARYTREE_H
#define BINARYTREE_H

using namespace std;
using namespace System;

template <class T>
class BinaryTree {
private:
    struct Node {
        T element;
        Node* left;
        Node* right;
        Node(T val) : element(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insertNode(Node* node, T element) {
        if (!node) return new Node(element);
        if (element < node->element)
            node->left = insertNode(node->left, element);
        else if (element > node->element)
            node->right = insertNode(node->right, element);
        return node;
    }

    Node* deleteNode(Node* node, T element) {
        if (!node) return node;
        if (element < node->element) {
            node->left = deleteNode(node->left, element);
        }
        else if (element > node->element) {
            node->right = deleteNode(node->right, element);
        }
        else {
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            Node* temp = minValueNode(node->right);
            node->element = temp->element;
            node->right = deleteNode(node->right, temp->element);
        }
        return node;
    }

    Node* minValueNode(Node* node) const {
        Node* current = node;
        while (current && current->left)
            current = current->left;
        return current;
    }

    Node* maxValueNode(Node* node) const {
        Node* current = node;
        while (current && current->right)
            current = current->right;
        return current;
    }

    void inOrder(Node* node) const {
        if (node) {
            inOrder(node->left);
            cout << node->element << " ";
            inOrder(node->right);
        }
    }

    void postOrder(Node* node) const {
        if (node) {
            postOrder(node->left);
            postOrder(node->right);
            cout << node->element << " ";
        }
    }

    void preOrder(Node* node) const {
        if (node) {
            cout << node->element << " ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insertNode(T element) {
        root = insertNode(root, element);
    }

    void deleteNode(T element) {
        root = deleteNode(root, element);
    }

    T findMin() const {
        Node* node = minValueNode(root);
        if (node) return node->element;
        throw runtime_error("The tree is empty");
    }

    T findMax() const {
        Node* node = maxValueNode(root);
        if (node) return node->element;
        throw runtime_error("The tree is empty");
    }

    void inOrder() const {
        inOrder(root);
        cout << endl;
    }

    void postOrder() const {
        postOrder(root);
        cout << endl;
    }

    void preOrder() const {
        preOrder(root);
        cout << endl;
    }
};

#endif
