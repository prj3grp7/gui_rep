#pragma once
#include "UserInfo.h"
#include "Message.h"
#include "MessageQueue.h"
#include "DisplayRequest.h"
#include <iostream>
#include <MsgProtocol.h>
#include <mainwindow.h>
#include "ThreadFunctor.h"
#include "Thread.h"

class DisplayWindow : public ThreadFunctor
{
public:
  DisplayWindow(UserInfo * team1, UserInfo * team2, QMainWindow* window) {
    team1_ = team1
    team2_ = team2
    window_ = window;
  }
  ~DisplayWindow() {}

  //ThreadFunction
  virtual void run();

  //Dispatcher
  void dispatcherDisplayMessage(unsigned long id, Message * msg);
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
  MsgQueue * getMsgQueue()
  {
    return DisplayMsgQueue_;
  }


private:
  constexpr static DisplayWindow * firstInstance_= NULL;
  const UserInfo * team1_ const;
  const UserInfo * team2_ const;
  MsgQueue DisplayMsgQueue_;
  QMainWindow* window_;
}
