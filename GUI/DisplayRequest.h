#pragma once
#include "Message.h"
#include <UserInfo.h>

class DisplayRequest : public Message
{
public:
  DisplayRequest(const int playerside) : playerside_(playerside)
  {

  }
  const int playerside_; 
  const UserInfo* user1;
  const UserInfo* user2;
};
