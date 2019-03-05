#include "Display.h"

void Display_functor::dispatcherDisplayMessage(unsigned long id, Message * msg)
{
    switch(id)
    {
    case SHOW_IDLE:
        static_cast<MainWindow*>(window_)->dispatcher(SHOW_IDLE,msg);
        break;
    case SHOW_PLACE_CUPS:
        static_cast<MainWindow*>(window_)->dispatcher(SHOW_PLACE_CUPS,msg);
        break;
    case SHOW_INFO:
        static_cast<MainWindow*>(window_)->dispatcher(SHOW_INFO,msg);
        break;
    case SHOW_GAME_STATUS:
        static_cast<MainWindow*>(window_)->dispatcher(SHOW_GAME_STATUS,msg);
        break;
    case SHOW_SERVICE:
        static_cast<MainWindow*>(window_)->dispatcher(SHOW_SERVICE,msg);
        break;
    case SHOW_ENDGAME:
        static_cast<MainWindow*>(window_)->dispatcher(SHOW_ENDGAME,msg);
        break;
    case CUPS_UPDATED:
        static_cast<MainWindow*>(window_)->dispatcher(CUPS_UPDATED,msg);
        break;
    default:
        //
        break;

    }
}
