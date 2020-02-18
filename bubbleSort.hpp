#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "container.hpp"
#include <iostream>
#include "sort.hpp"
using namespace std;

class BubbleSort : public Sort
{
public:
    /* Pure Virtual Functions */
    virtual void sort(Container *container)
    {
        int i, j;
        bool swapped;
        for (i = 0; i < container->size() - 1; i++)
        {
            swapped = false;
            for (j = 0; j < container->size() - i - 1; j++)
            {
                if (container->at(j)->evaluate() > container->at(j + 1)->evaluate())
                {
                    container->swap(j, j + 1);
                    swapped = true;
                }
            }

            // IF no two elements were swapped by inner loop, then break
            if (swapped == false)
                break;
        }
    }
};

#endif