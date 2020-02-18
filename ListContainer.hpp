#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include <list>
#include <iostream>

using namespace std;

class ListContainer : public Container
{
protected:
    list<Base *> list1;

public:
    ListContainer() : Container(){};
    ListContainer(Sort *function) : Container(function){};

    /* Non Virtual Functions */
    void set_sort_function(Sort *sort_function){
        this -> sort_function = sort_function;
    } // set the type of sorting algorithm

    /* Pure Virtual Functions */
    // push the top pointer of the tree into container
    virtual void add_element(Base *element){
        list1.push_back(element);
    }
    // iterate through trees and output the expressions (use stringify())
    virtual void print(){
        for(auto const &i: list1){
            cout << i->stringify();
        }
    }
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort(){
        sort_function->sort(this);
    }

    /* Essentially the only functions needed to sort */
    //switch tree locations
    virtual void swap(int i, int j) {
        list<Base *>:: iterator a = list1.begin();
        list<Base *>:: iterator b = list1.begin();
        advance(b,i);
        advance(a,j);
        Base *temp = *b;
        *b = *a;
        *a = temp;
    }
    // get top ptr of tree at index i
    virtual Base *at(int i){
        list<Base *>:: iterator iter = list1.begin();
        advance(iter, i);
        return *iter;
    }
    // return container size
    virtual int size(){
        return list1.size();
    }
};

#endif //__LISTCONTAINER_HPP____