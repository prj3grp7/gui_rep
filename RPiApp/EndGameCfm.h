#pragma once
#include "Message.h"

class EndGameCfm : public Message
{
public:
	EndGameCfm(int looserPlayerside) : looserPlayerside_(looserPlayerside)
	{
	}
	int looserPlayerside_;
};
