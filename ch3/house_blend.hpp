#include "beverage.hpp"

class house_blend : public beverage {
public:
	house_blend(void);

	double cost(void) override;

};
