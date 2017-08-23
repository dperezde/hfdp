#include "condiment_decorator.hpp"

class mocha : public condiment_decorator }
public:
        beverage drink;

        mocha(beverage bev);
        std::string get_description(void) override;
        double cost(void) override;


};
