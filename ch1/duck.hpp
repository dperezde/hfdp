#ifndef H_DUCK
#define H_DUCK

#include <memory>
#include <type_traits>

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

class Duck {
public:
	virtual ~Duck() {}

	virtual	void display(void) =0;

	void perform_fly(void);

	void perform_quack(void);

	void swim(void);


	std::unique_ptr<fly_behavior> fly_behav;
	std::unique_ptr<quack_behavior> quack_behav;

	template <typename Tqb>
	void set_quack(Tqb)
	{
		if(std::is_same<Tqb*, decltype(dynamic_cast<Tqb*>(quack_behav.get()))>::value) {
			quack_behav.reset(new Tqb());
		}
		else {
			std::cerr << "passed argument is not of a derived type from quack_behavior"<< std::endl;

		}
	}

	template <typename Tfb>
	void set_flight(Tfb)
	{
		if( std::is_same<Tfb*, decltype(dynamic_cast<Tfb*>(fly_behav.get()))>::value) {
			fly_behav.reset(new Tfb());
		}
		else {
			std::cerr << "passed argument is not if a derived type from fly_behavior " << std::endl;

		}

	}


};

#endif
