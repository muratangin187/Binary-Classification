#include "DecisionTreeNode.h"
#include <string>
using namespace std;
class DecisionTree {
private:
	DecisionTreeNode* rootPtr;
public:
	void train(const bool**, const int*, const int, const int);
	void train(const string, const int, const int);
	int predict(const bool*);
	double test(const bool**, const int*, const int);
	double test(const string, const int);
	void print();
	void print(DecisionTreeNode* nodePtr, int height);
protected:
	void train(DecisionTreeNode* nodePtr, const bool**, const int*, bool*, bool*, const int, const int);
	static double calculateEntropy(const int* classCounts, const int numClasses);
	static double calculateInformationGain(const bool** data, const int* labels,
		const int numSamples, const int numFeatures, const bool* usedSamples,
		const int featureId);
};