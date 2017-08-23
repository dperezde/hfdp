#include <iostream>
#include <type_traits>

#include "duck.hpp"
#include "quack.hpp"
#include "squeak.hpp"
#include "mute_quack.hpp"
#include "fly_with_wings.hpp"
#include "fly_no_way.hpp"

void Duck::perform_fly(void)
{
	fly_behav->fly();

}

void Duck::perform_quack(void)
{
	quack_behav->quack_noise();

}


void Duck::swim(void)
{
	std::cout << "All ducks float, even decoys!" << std::endl;
}
/*
template <typename Tqb>
void Duck::set_quack(Tqb *tqb)
{
	if(dynamic_cast<Tqb*>(quack_behav) != nullptr) {
		quack_behav.reset(new Tqb());
	}

	else if (dynamic_cast<squeak*>(qb)) {
		quack_behav.reset(new squeak());
	}
	else if (dynamic_cast<mute_quack*>(qb)) {
		quack_behav.reset(new mute_quack());
	}
	else {
		std::cerr << "passed argument is not of a derived type from quack_behavior"<< std::endl;

	}
}

template <typename Tfb>
void Duck::set_flight(Tfb* tfb)
{
	if(dynamic_cast<Tfb*>(fly_behav)) {
		fly_behav.reset(new Tfb());
	}
	else if (dynamic_cast<fly_no_way*>(fb)) {
		fly_behav.reset(new fly_no_way());
	}
	else if( )

	else {
		std::cerr << "passed argument is not if a derived type from fly_behavior " << std::endl;

	}

}
*/
