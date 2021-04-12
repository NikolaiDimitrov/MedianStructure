#ifndef MEDIAN_STRUCTURE_H 
#define MEDIAN_STRUCTURE_H
#include <iostream>
#include <list>

using namespace std;

class MedianStructure
{
	private:
	int* arr;
	list<int> data;
	int numberOfItems;
    float median;	

	public:
	MedianStructure();
	MedianStructure(list<int> items);
    ~MedianStructure();
	void addToStructure(int element);
	float getTheMedian();
	float calcMedian();
	void printTheData();
		
};

#endif