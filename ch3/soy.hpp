#include "condiment_decorator.hpp"

class soy : public condiment_decorator {
public:
        beverage drink;

        soy(beverage bev);
        std::string get_description(void) override;
        double cost(void) override; 
}
