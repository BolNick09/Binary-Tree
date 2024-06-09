#include <iostream>
#include "BinaryTree.h"



int main() 
{
    Tree tree;

    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(9);

    std::cout << "Min value in tree: " << tree.findMin() << std::endl;
    std::cout << "Max value in tree: " << tree.findMax() << std::endl;
    std::cout << "Sum of all values in tree: " << tree.getSum() << std::endl;
    std::cout << "Size of tree: " << tree.getSize() << std::endl;

    return 0;
}