#ifndef H_SQUEAK 
#define H_SQUEAK

#include "quack_behavior.hpp"

class squeak : public quack_behavior {
public:
	void quack_noise(void) override;

};

#endif
