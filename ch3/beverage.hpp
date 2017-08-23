#include <string>

class beverage {
public:
	std::string get_description(void);
	virtual double cost(void);

protected:

	std::string description {"unknown beverage"};

};
