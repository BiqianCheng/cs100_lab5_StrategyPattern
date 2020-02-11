#ifndef __SUB_HPP__
#define __SUB_HPP__
#include "base.hpp"

class Sub : public Base
{

public:
    Sub(Base *minu, Base *minuend) : Base()
    {
        mi1 = minu;
        mi2 = minuend;
    }
    virtual double evaluate()
    {
        return mi1->evaluate() - mi2->evaluate();
    }
    virtual std::string stringify()
    {
        return mi1->stringify() + "-" + mi2->stringify();
    }

private:
    Base *mi1;
    Base *mi2;
};

#endif //__SUB_HPP__
