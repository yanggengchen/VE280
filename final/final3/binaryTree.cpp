#include "binaryTree.h"

// Implement the following methods listed below.
// You don't need to implement the other methods.
// If you decide to implement the other methods,
// DON'T INCLUDE THEM IN YOUR SUBMISSION.
//
// In your implementations, you can call any other
// methods, even those you don't need to implement.

BinaryTree::BinaryTree(int v, const BinaryTree &lChild, const BinaryTree &rChild){
   // TODO
   // You can use the initialization syntax if you want
	this->v = v;
	empty = 0;
	this->left = new BinaryTree(lChild);
	this->right = new BinaryTree(rChild);
}

BinaryTree copyhelper(const BinaryTree& bt) {
	BinaryTree result;
	
}

BinaryTree::BinaryTree(const BinaryTree &bt){
   // TODO
   // You can use the initialization syntax if you want
	this->v = bt.v;
	this->empty = bt.empty;

}

BinaryTree::~BinaryTree(){
   // TODO
	removeAll();
}

void BinaryTree::removeAll(){
   // TODO
	if (this->left != nullptr) {
		left->removeAll();
	}
	if (this->right != nullptr) right->removeAll();
	delete this;
	return;
}

bool BinaryTree::isSorted(){
   // TODO
	if (empty == 1) return 1;
	int left_sorted = 1;
	int right_sorted = 1;
	if (this->left != nullptr) {
		left_sorted = left->isSorted();
		left_sorted = (left_sorted && v >= left->v);
	}
	if (this->right != nullptr) {
		right_sorted = right->isSorted();
		right_sorted = (right_sorted && v >= right->v);
	}
	if (left_sorted && right_sorted) return 1;
	else return 0;
}

int BinaryTree::depth(){
   // TODO
}
