#include "CopyCtor.hpp"
#include <iostream>

namespace CopyCtor
{

class Candy
{
public:
    explicit Candy(){};

    ~Candy(){};

    static void addCandy(uint32_t _amount, 
                        std::string _brand,
                        CandyColor _candyColor,
                        bool _expired);
    
    static std::string getBrand();

private:
    // member variable
    static uint32_t amount;
    static std::string brand;
    static CandyColor candyColor;
    static bool expired;
};

uint32_t Candy::amount;
std::string Candy::brand;
CandyColor Candy::candyColor;
bool Candy::expired;

void Candy::addCandy(uint32_t _amount, 
                    std::string _brand,
                    CandyColor _candyColor,
                    bool _expired)
{
    Candy::amount = _amount;
    Candy::brand = _brand;
    Candy::candyColor = _candyColor;
    Candy::expired = _expired;
}


std::string Candy::getBrand()
{
    return brand;
}

void tryCompile()
{
    Candy Candybox;
    Candybox.addCandy(10, "Kinder", black, false);
    std::cout<<Candybox.getBrand()<<std::endl;
}

}