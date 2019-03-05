#ifndef PICTURE_H
#define PICTURE_H
#define RED_CUP_ADRESS "placeholder adress"
#define GREEN_CUP_ADRESS "placeholder adress"
#define GAMEBOARD_ADRESS "placeholder adress"
#define IDLE_ADRESS "placeholde adress"

#include <assert.h>

enum picture
{
  unknown,
  gameboard,
  idlescreen,
  greenCup,
  redCup,

};




std::string Changepicture(picture pic)
{
    try
    {
      switch(pic)
      case gameboard:
          return GAMEBOARD_ADRESS;
      break;
      case idlescreen:
          return IDLE_ADRESS;
      break;
      case greenCup:
          return GREEN_CUP_ADRESS;
      break;
      case redCup:
          return RED_CUP_ADRESS;
      break;
      default:
          throw unknown;
      break;



    }catch(picture pic_)
    {
        assert(pic_ != unknown);

    }

}


#endif // PICTURE_H
