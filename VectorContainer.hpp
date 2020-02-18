#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__
#include "container.hpp"
#include <vector>
#include <iostream>
using namespace std;

class VectorContainer : public Container
{
protected:
    vector<Base *> vec1;

public:
    VectorContainer() : Container(){};
    VectorContainer(Sort *function) : Container(function){};

    /* Non Virtual Functions */
    void set_sort_function(Sort *sort_function){
        this -> sort_function = sort_function;
    } // set the type of sorting algorithm

    /* Pure Virtual Functions */
    // push the top pointer of the tree into container
    virtual void add_element(Base *element){
        vec1.push_back(element);
    }
    // iterate through trees and output the expressions (use stringify())
    virtual void print(){
        int n = vec1.size();
        for(int i = 0; i < n; i++){
            cout << vec1.at(i) ->stringify();
        }
    }
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort(){
        sort_function->sort(this);
    }

    /* Essentially the only functions needed to sort */
    //switch tree locations
    virtual void swap(int i, int j) {
        Base *temp = vec1[i];
        vec1[i] = vec1[j];
        vec1[j] = temp;
    }
    // get top ptr of tree at index i
    virtual Base *at(int i){
        return vec1[i];
    }
    // return container size
    virtual int size(){
        return vec1.size();
    }
};

#endif //__VECTORCONTAINER_HPP__