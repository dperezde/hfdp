#include "whip.hpp"

whip::whip(beverage bev) : drink{bev}{}

std::string whip::get_description(void)
{
        return drink.get_description() + ", whip";
}

double whip::cost(void)
{
        return .20 + drink.cost();
}
