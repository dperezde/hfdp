#ifndef H_FLY_BEAH
#define H_FLY_BEAH

#include <iostream>

class fly_behavior {
public:
	virtual ~fly_behavior() {}
	virtual void fly(void) =0;

};

#endif
