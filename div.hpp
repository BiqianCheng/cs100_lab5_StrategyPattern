#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class DIV : public Base
{

public:
    DIV(Base *divisor1, Base *divisor2) : Base()
    {
        div1 = divisor1;
        div2 = divisor2;
    }
    virtual double evaluate()
    {
        return div1->evaluate() / div2->evaluate();
    }
    virtual std::string stringify()
    {
        return div1->stringify() + "/" + div2->stringify();
    }

private:
    Base *div1;
    Base *div2;
};

#endif //__DIV_HPP__
