#include "soy.hpp"

soy::soy(beverage bev) : drink{bev}{}

std::string soy::get_description(void)
{
        return drink.get_description() + ", Soy";
}

double soy::cost(void)
{
        return .20 + drink.cost();
}
