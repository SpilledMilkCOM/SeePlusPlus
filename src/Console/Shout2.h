#pragma once

#include "IMapper.h"

class Shout2
{
public:
	virtual void Map(const char* source, char** mapped);
	const char* ShoutOut();
	static const char* StaticShoutOut();
};
