#include "beverage.hpp"

class condiment_decorator : public beverage {
public:
	virtual std::string get_description(void);
};
