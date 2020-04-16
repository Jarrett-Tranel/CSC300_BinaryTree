#include "BinaryTree.hpp"
#include <iostream>
using namespace std;

int main()
{
     
     BinaryTree* theTree = new BinaryTree(13);
     theTree->add(3);
     theTree->add(3);
     theTree->add(2);
     theTree->add(5);
     theTree->add(7);
     theTree->add(5);
     theTree->add(90);
     theTree->add(17);
     theTree->add(111);

     BinaryTree* test = new BinaryTree(3);
     test->add(1);
     test->add(4);
     test->add(2);
     

     theTree->displayPostOrder();
}