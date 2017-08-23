#ifndef H_MUTE_QUACK
#define H_MUTE_QUACK

#include "quack_behavior.hpp"

class mute_quack : public quack_behavior {
public:

	void quack_noise(void) override;

};

#endif
