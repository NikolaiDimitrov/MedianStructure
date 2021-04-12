#include<iostream>
#include "MedianStructure.h"
using namespace std;


int main()
{
	list<int> l = {1,2,4,8,9};
	list<int>::iterator it = l.begin();
	MedianStructure	obj(l);
	cout << obj.getTheMedian() << endl;
	obj.addToStructure(5);
	obj.printTheData();
	cout << obj.getTheMedian() << endl;
	obj.addToStructure(0);
	obj.printTheData();
	cout << obj.getTheMedian() << endl;
	obj.addToStructure(0);
	obj.printTheData();
	cout << obj.getTheMedian() << endl;
	obj.addToStructure(10);
	obj.printTheData();
	cout << obj.getTheMedian() << endl;
	return 0;
}
