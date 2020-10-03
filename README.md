# CS202 HW2 - Binary Classification

You can deploy a decision tree by using given data and after training you can test it for further test data.

## Methods

### void DecisionTree::train(const bool** data, const int* labels, const int numSamples, const int numFeatures);
data is a boolean array with numSamples rows and numFeatures columns, labels is a vector of length numSamples. Together, they define the training data set. Using this data set, the function must build the decision tree. The calculateInformationGain function you implemented earlier should be used here.

### void DecisionTree::train(const string fileName, const int numSamples, const int numFeatures); 
Opens and parses the text file fileName that contains numSamples lines, each of which represents a sample (observation). Each observation is given by numFeatures+1 space-separated numbers. The first numFeatures numbers are binary (0 or 1)numbers indicating the feature values. The last number is an integer corresponding to the class label for that observation. The class numbers are between 1 and N where N is the number of classes (the largest number in this column). After parsing the text input, the above train function must be called for the actual training.

### int DecisionTree::predict(const bool* data);
This function can only be called after train is called. data is a boolean array of size numFeatures (numFeatures is already known by this point), and it represents a single observation. The function must return the integer class label assigned to the input observation by the decision tree.

### double DecisionTree::test(const bool** data, const int* labels, const int numSamples);
This function can only be called after train is called. data is a boolean array with numSamples rows and numFeatures columns, labels is a vector of length numSamples. Together they define a test data set for measuring the accuracy of the decision tree classifier. Note that the training data and test data can have different number of samples (numSamples). This function must utilize the predict function to predict the class of each observation in the test data set, compare the predictions with the true classes of the observations, and return the accuracy (proportion of true predictions among the total number of observations).

### double DecisionTree::test(const string fileName, const int numSamples);
Opens and parses a text file fileName. The specification of the text file is the same with the one described in the train function. After parsing the text input, the above test function must be called for actual testing.

### void print();
The function prints the nodes of the tree
using preorder traversal. Each node should be printed on a separate line. In the beginning of each line, put a number of tabs according to the level of the node being printed (e.g., the root node has no tabs and a node at level 5 has 4 tabs). The indentation will help the user understand the printed tree structure. If the node is a leaf node, the integer corresponding to the selected class is printed as “class=x” (e.g., for the second class, “class=2” is printed). For non-leaf nodes, the integer feature index used for the split at that node is printed. Note that the feature indices are zero-based but the class numbers start from 1.

## Prerequisites

There is no dependencies or prerequisites for this project.

## Installing

You can compile project with main file in linux or windows enviroment.

Linux

```
g++ -o Program main.cpp
```

VS2019

```
You can import this project with .sln file.
```

## Authors

* **Murat ANGIN** - [muratangin187](https://github.com/muratangin187)

## License
The MIT License (MIT)

Copyright (c) 2015 Chris Kibble

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
