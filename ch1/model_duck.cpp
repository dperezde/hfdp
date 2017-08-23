#include "model_duck.hpp"
#include "fly_no_way.hpp"
#include "quack.hpp"


model_duck::model_duck()
{
	quack_behav.reset(new quack());
	fly_behav.reset(new fly_no_way());
}

void model_duck::display(void)
{
	std::cout << "I'm a model duck" << std::endl;
}
