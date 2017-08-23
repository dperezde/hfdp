#include <memory>

#include "mallard_duck.hpp"
#include "fly_with_wings.hpp"
#include "quack.hpp"

mallard_duck::mallard_duck()
{
	quack_behav.reset( new quack());
	fly_behav.reset( new fly_with_wings());
}

void mallard_duck::display(void)
{
	std::cout << "I'm a real mallard duck!" << std::endl;

}


