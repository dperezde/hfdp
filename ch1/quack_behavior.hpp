#ifndef H_QUACK_BEHAV
#define H_QUACK_BEHAV

#include <iostream>

class quack_behavior {
public:
	virtual ~quack_behavior() {}
	virtual void quack_noise(void) =0;

};

#endif
