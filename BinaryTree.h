#pragma once



class TreeNode
{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class Tree
{
private:
    TreeNode* root;

    TreeNode* insert(TreeNode* root, int value)
    {
        if (!root)
            return new TreeNode(value);


        if (value < root->data)
            root->left = insert(root->left, value);

        else
            root->right = insert(root->right, value);

        return root;
    }

    int findMin(TreeNode* root)
    {
        if (!root->left)
            return root->data;

        return findMin(root->left);
    }

    int findMax(TreeNode* root)
    {
        if (!root->right)
            return root->data;

        return findMax(root->right);
    }

    int sum(TreeNode* root)
    {
        if (!root)
            return 0;

        return root->data + sum(root->left) + sum(root->right);
    }

    int size(TreeNode* root)
    {
        if (!root)
            return 0;

        return 1 + size(root->left) + size(root->right);
    }

public:
    Tree() : root(nullptr) {}

    void insert(int value)
    {
        root = insert(root, value);
    }
    
    int findMin()
    {
        if (!root)
            return -1;

        return findMin(root);
    }

    int findMax()
    {
        if (!root)
            return -1;

        return findMax(root);
    }

    int getSum()
    {
        return sum(root);
    }

    int getSize()
    {
        return size(root);
    }
};