#include "DecisionTreeNode.h"

DecisionTreeNode::DecisionTreeNode() {
	itemId = -1;
	rightPtr = nullptr;
	leftPtr = nullptr;
}

DecisionTreeNode::DecisionTreeNode(const int itemId, DecisionTreeNode* leftPtr, DecisionTreeNode* rightPtr) {
	this->leftPtr = leftPtr;
	this->rightPtr = rightPtr;
	this->itemId = itemId;
}

int DecisionTreeNode::getItemId() {
	return itemId;
}

void DecisionTreeNode::setItemId(const int itemId) {
	this->itemId = itemId;
}

void DecisionTreeNode::setLeftChild( DecisionTreeNode* leftPtr) {
	this->leftPtr = leftPtr;
}
void DecisionTreeNode::setRightChild( DecisionTreeNode* rightPtr) {
	this->rightPtr = rightPtr;
}
DecisionTreeNode* DecisionTreeNode::getLeftChild() {
	return leftPtr;
}
DecisionTreeNode* DecisionTreeNode::getRightChild() {
	return rightPtr;
}
