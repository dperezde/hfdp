#include "beverage.hpp"

class espresso : public beverage {
public:
	espresso();
	double cost(void) override;
};
