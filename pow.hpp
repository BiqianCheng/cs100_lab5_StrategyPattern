#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath>

class POW : public Base
{

public:
    POW(Base *numBase, Base *exponent) : Base()
    {
        base = numBase;
        expn = exponent;
    }
    virtual double evaluate()
    {
        return pow(base ->evaluate(),expn->evaluate());
    }
    virtual std::string stringify()
    {
        return base->stringify() + "**" + expn->stringify();
    }

private:
    Base *base;
    Base *expn;
};

#endif //__POW_HPP__
