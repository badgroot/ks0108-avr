#include <avr/io.h>

#include "KS0108.h"
#include "graphic.h"

int main(void)
{
  GLCD_Initalize();
  GLCD_ClearScreen();

  GLCD_Rectangle(1,1,126,62);
  GLCD_Rectangle(3,3,122,58);

  GLCD_GoTo(20,2);
  GLCD_WriteString("Mike");
  
  
  //Draw Heart
  GLCD_Circle(59,28,6);
  GLCD_Circle(68,28,6);
  //GLCD_Circle(59,28,5);
  //GLCD_Circle(68,28,5);
  //GLCD_Circle(59,28,4);
  //GLCD_Circle(68,28,4);
  //GLCD_Circle(59,28,3);
  //GLCD_Circle(68,28,3);
  //GLCD_Circle(59,28,2);
  //GLCD_Circle(68,28,2);  

  GLCD_Line(58,35,63,40);
  GLCD_Line(69,35,64,40);

  //Fill Heart
  GLCD_Line(57,23,61,23);
  GLCD_Line(66,23,70,23);
  GLCD_Line(56,24,71,24);
  GLCD_Line(55,25,72,25);
  GLCD_Line(54,26,73,26);
  GLCD_Line(54,27,73,27);
  GLCD_Line(54,28,73,28);
  GLCD_Line(54,29,73,29);
  GLCD_Line(54,30,73,30);
  GLCD_Line(55,31,72,31);
  GLCD_Line(56,32,71,32);
  GLCD_Line(57,33,70,33);
  GLCD_Line(58,34,69,34);
  GLCD_Line(59,35,68,35);
  GLCD_Line(60,36,67,36);
  GLCD_Line(61,37,66,37);
  GLCD_Line(62,38,65,38);
  GLCD_Line(63,39,64,39);



  GLCD_GoTo(76,5);
  GLCD_WriteString("Amanda");

  
  /*
  GLCD_GoTo(0,0);
  GLCD_WriteChar('1');
  GLCD_GoTo(0,1);
  GLCD_WriteChar('1');
  GLCD_WriteString("23456789012345678901");

  GLCD_GoTo(0,2);
  GLCD_WriteChar('2');
  GLCD_GoTo(0,3);
  GLCD_WriteChar('3');
  GLCD_GoTo(0,4);
  GLCD_WriteChar('4');
  GLCD_GoTo(0,5);
  GLCD_WriteChar('5');

  GLCD_GoTo(0,6);
  GLCD_WriteChar('6');

  GLCD_GoTo(0,7);
  GLCD_WriteChar('7');
  */

  //GLCD_GoTo(0,1);
  //GLCD_WriteString("how's it going?");
  //GLCD_WriteChar(5 + '0');

  while(1);
}