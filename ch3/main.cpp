#include <iostream>

#include "espresso.hpp"
#include "house_blend.hpp"
#include "dark_roast.hpp"

#include "mocha.hpp"
#include "whip.hpp"
#include "soy.hpp"

int main(void)
{
        beverage drink1 = espresso();

        std::cout << drink1.get_description() << "$" << drink1.cost() << std::endl;

        beverage drink2 = dark_roast();
        drink2 = mocha(drink2);
        drink2 = mocha(drink2);
        drink2 = whip(drink2);

        std::cout << drink2.get_description() << "$" << drink2.cost() << std::endl;


        beverage drink3 = house_blend();
        drink3 = soy(drink3);
        drink3 = mocha(drink3);
        drink3 = whip(drink3);

        std::cout << drink3.get_description() <<"$" << drink3.cost() << std::endl;

}
