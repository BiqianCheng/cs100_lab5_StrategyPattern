#ifndef __SELECTIONSORT_HPP__
#define __SELECTIONSORT_HPP__

#include "container.hpp"

class Container;

class SelectionSort:public Sort {
    public:
        /* Constructors */
        Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) 
	{
	int i, j, first, temp;
      int numLength = num.length( );
      for (i= numLength - 1; i > 0; i--)
     {
           first = 0;                 // initialize to subscript of first element
           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
          {
                 if (num[j] < num[first])
                 first = j;
          }
         temp = num[first];   // Swap smallest found with element in position i.
         num[first] = num[i];
         num[i] = temp;
     }
     return;




	};
};

#endif //__SELECTIONSORT_HPP__
