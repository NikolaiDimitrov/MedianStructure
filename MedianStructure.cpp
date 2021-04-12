#include <cstring>
#include "MedianStructure.h"


MedianStructure::MedianStructure()
{
    numberOfItems = 0;
}

MedianStructure::MedianStructure(list<int> items)
{
    data = items;
    data.sort();
    numberOfItems = data.size();
    median = calcMedian();
}

MedianStructure::~MedianStructure()
{
    data.clear();
}

float MedianStructure::calcMedian()
{
    if(!numberOfItems)
    {
        return 0;
    }
    list<int>::iterator it = data.begin();
    if(!(numberOfItems % 2))
    {
        std::advance(it, ((numberOfItems/2) -1));
        float tmp = *it;
        it++;
        return (static_cast<float>(tmp + *it)/2);
    }
    else
    {
        std::advance(it, numberOfItems/2);
        return *it;
    }
    
}
void MedianStructure::addToStructure(int element)
{ 
    if(numberOfItems != 0)
    {
        list<int>::iterator it = data.begin();
        if(median > element)
        {
            for(; *it < median;it++)
            {
                if(*it > element)
                {
                    data.insert(it,element);
                    break;   
                }
            }
        }
        else
        {
            std::advance(it, numberOfItems/2);
            for(; it != data.end();++it)
            {
                if((*it > element))
                {
                    data.insert(it,element);
                    break;   
                }
                else if((it != data.end()) && (next(it) == data.end()))
                {
                    it++;
                    data.insert(it,element);
                    break;   
                }
            }
        }
    }
    else
    {
        data.push_back(element);
    }

    numberOfItems++;
    median = calcMedian();
}

float MedianStructure::getTheMedian()
{
    return median;
}

void MedianStructure::printTheData()
{
    list<int>::iterator it = data.begin();
    for (; it != data.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}