#include "BinaryTree.hpp"

BinaryTree::BinaryTree(int payload)
{
    this->payload = payload;
    this->leftChild = 0;
    this->rightChild = 0;
}

//left, ourself, right
void BinaryTree::displayInOrder()
{
    if(this->leftChild)
    {
        this->leftChild->displayInOrder();
    }
    std::cout<<this->payload<<"\n";
    if(this->rightChild)
    {
        this->rightChild->displayInOrder();
    }
}

//ourself, left, right      
void BinaryTree::displayPreOrder()
{
    std::cout<<this->payload<<"\n";
    if(this->leftChild)
    {
        this->leftChild->displayPreOrder();
    }
    if(this->rightChild)
    {
        this->rightChild->displayPreOrder();
    }
}

//left, right, ourself
void BinaryTree::displayPostOrder()
{
    if(this->leftChild)
    {
        this->leftChild->displayPostOrder();
    }
    if(this->rightChild)
    {
        this->rightChild->displayPostOrder();
    }
    std::cout<<this->payload<<"\n";
}

void BinaryTree::add(int payload)
{
    if(payload <= this->payload)
    {
        //should go to my left
        if(!this->leftChild)
        {
            this->leftChild = new BinaryTree(payload);
        }
        else
        {
            this->leftChild->add(payload);
        }
    }
    else
    {
        //should go to my right
        if(!this->rightChild)
        {
            this->rightChild = new BinaryTree(payload);
        }
        else
        {
            this->rightChild->add(payload);
        } 
    } 
}