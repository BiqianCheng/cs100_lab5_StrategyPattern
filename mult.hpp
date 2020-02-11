#ifndef __MULTI_HPP__
#define __MULTI_HPP__


#include "base.hpp"

class Mult : public Base
{

public:
    Mult(Base *value1, Base *value2) : Base()
    {
        num1 = value1;
        num2 = value2;
    }
    virtual double evaluate()
    {
        return num1->evaluate() * num2->evaluate();
    }
    virtual std::string stringify()
    {
        return num1->stringify() + "*" + num2->stringify();
    }

private:
    Base *num1;
    Base *num2;
};

#endif //__MULTI_HPP__
