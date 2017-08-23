#include "condiment_decorator.hpp"

class whip : public condiment_decorator }
public:
        beverage drink;

        whip(beverage bev);
        std::string get_description(void) override;
        double cost(void) override;


};
