#include "stdafx.h"
#include <iostream>
using namespace std;
class Node {
public:
	Node* left;
	Node* right;
	int data;
	int height;
	Node(int v):data(v),left(NULL),right(NULL),height(0){}
};
