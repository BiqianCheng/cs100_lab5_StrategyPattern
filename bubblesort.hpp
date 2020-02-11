#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "container.hpp"

class Container;

class BubbleSort:public Sort {
    public:
        /* Constructors */
        Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) {
	
	 int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = num.length( ); 
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] > num[j])      // ascending order simply changes to <
              { 
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;



	};
};

#endif //__BUBBLESORT_HPP__
