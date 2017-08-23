#include "mocha.hpp"

mocha::mocha(beverage bev) : drink{bev}{}

std::string mocha::get_description(void)
{
        return drink.get_description() + ", Mocha";
}

double mocha::cost(void)
{
        return .20 + drink.cost();
}
