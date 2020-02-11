#ifndef __ADD_HPP__
#define __ADD_HPP__


#include "base.hpp"

class ADD : public Base
{

public:
    ADD(Base *number1, Base *number2) : Base()
    {
        n1 = number1;
        n2 = number2;
    }
    virtual double evaluate()
    {
        return n1->evaluate() + n2->evaluate();
    }
    virtual std::string stringify()
    {
        return n1->stringify() + "+" + n2->stringify();
    }

private:
    Base *n1;
    Base *n2;
};

#endif //__ADD_HPP__
