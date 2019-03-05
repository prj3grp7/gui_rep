#pragma once
#include "UserInfo.h"
#include "Message.h"
#include "MessageQueue.h"
#include "DisplayRequest.h"
#include <iostream>
#include <MsgProtocol.h>
#include <mainwindow.h>

class Display_functor
{
public:
    Display_functor(const UserInfo* team1, const UserInfo* team2, QMainWindow* window) {
      team1_ = team1;
      team2_ = team2;
      window_ = window;

    }
  ~Display_functor() {}

  //ThreadFunction
  virtual void run()
  {
      while(true)
      {
          unsigned long id;
          Message * msg = DisplayMsgQueue_.receive(id);
          dispatcherDisplayMessage(id, msg);
          delete msg;

      }
  }

  //Dispatcher

  void dispatcherDisplayMessage(unsigned long id, Message * msg);
  const UserInfo* getTeam1();
  const UserInfo* getTeam2();
    //Handlers

private:
  constexpr static Display_functor* firstInstance_= NULL;
  const UserInfo * team1_;
  const UserInfo * team2_;
  MsgQueue DisplayMsgQueue_;
  QMainWindow* window_;

};
