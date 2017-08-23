#include <memory>

#include "mallard_duck.hpp"
#include "model_duck.hpp"
#include "fly_rocket.hpp"


int main(void)
{
	std::unique_ptr<Duck> m_duck(new mallard_duck);

	m_duck->perform_quack();
	m_duck->perform_fly();

	std::unique_ptr<Duck> model(new model_duck);

	model->perform_fly();

	model->set_flight(fly_rocket());
	model->perform_quack();
	model->perform_fly();

	return 0;
}
