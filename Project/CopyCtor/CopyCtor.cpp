#include "CopyCtor.hpp"
#include <iostream>

namespace CopyCtor
{

class Candy
{
public:
    Candy(uint32_t _amount):amount(_amount)
    {
        std::cout<<"Constructor"<<std::endl;
    };

    Candy():amount(0)
    {
        std::cout<<"Constructor"<<std::endl;
    };

    Candy(const Candy& obj);

    Candy& operator=(Candy obj);

    ~Candy(){};

    void addCandy(uint32_t _amount);
    
    uint32_t getAmount();

private:
    // member variable
    uint32_t amount;
};

Candy::Candy(const Candy& obj)
{
    std::cout<<"Copy Constructor"<<std::endl;
    if(&obj == this)
    {
        return;
    }
    amount = obj.amount;
}

Candy& Candy::operator=(Candy obj)
{
    std::cout<<"Copy Constructor"<<std::endl;
    if(&obj == this)
    {
        return *this;
    }
    amount = obj.amount;
    return *this;
}

void Candy::addCandy(uint32_t _amount)
{
    Candy::amount = _amount;
}

uint32_t Candy::getAmount()
{
    return Candy::amount;
}

void tryCompile()
{
    Candy Candybox;
    Candybox.addCandy(10);
    std::cout<<Candybox.getAmount()<<std::endl;

    Candy Candybox_2 = Candybox;
    std::cout<<Candybox_2.getAmount()<<std::endl;
}

}