class DecisionTreeNode {
private:
	int itemId; // if its leaf itemId = classId, else itemId = featureId
	DecisionTreeNode* leftPtr;
	DecisionTreeNode* rightPtr;
public:
	DecisionTreeNode();
	DecisionTreeNode(const int itemId, DecisionTreeNode* leftPtr = nullptr, DecisionTreeNode* rightPtr = nullptr);
	~DecisionTreeNode();
	void setItemId(const int itemId);
	int getItemId();
	void setLeftChild( DecisionTreeNode* leftPtr);
	void setRightChild( DecisionTreeNode* rightPtr);
	DecisionTreeNode* getLeftChild();
	DecisionTreeNode* getRightChild();
	friend class DecisionTree;
};