#ifndef H_QUACK
#define H_QUACK

#include "quack_behavior.hpp"

class quack : public quack_behavior {
public:
	void quack_noise(void) override;
};

#endif

