#include <iostream>
#include "DecisionTree.h"

int main() {
	DecisionTree d;

	const bool test[21]{ 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,1 ,0 ,0, 0, 0 ,0, 0, 1, 0, 0, 1, 1 };
	const bool test2[21]{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 };
	
	d.train("train_data.txt", 498, 21);
	
	cout << "Accuracy after training and testing: " << d.test("test_data.txt", 473) << endl;
	
	cout << "My prediction for { 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,1 ,0 ,0, 0, 0 ,0, 0, 1, 0, 0, 1, 1 } is class " << d.predict(test) << endl;
	cout << "My prediction for { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 } is class " << d.predict(test2) << endl;
	cout << endl;
	d.print();

	return 0;
}
