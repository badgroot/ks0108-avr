
#include <avr/io.h>
#include <util/delay.h>

#include "KS0108.h"
#include "font48x48_5.h"
#include "32x48-1.h"

void WriteBigChar(char num, char x_start, char y_start);

void Delay_ms(int cnt) {
	while (cnt-->0) {
		_delay_ms(1);
	}
}

int main(void)
{
  GLCD_Initalize();
  GLCD_ClearScreen();

  while(1)
  {
    for (char j = 0; j < 10; j++)
    { 
      WriteBigChar(j,48,1);
      Delay_ms(1000);
    }
  }
}

void WriteBigChar(char num, char x_start, char y_start)
{
  for (char i = 0; i < 6; i++)
  {
    GLCD_GoTo(x_start,(y_start + i));
    for (char col_marker = 0; col_marker < 32; col_marker++)
    {
      GLCD_WriteData(
        GLCD_ReadByteFromROMMemory(
                                  (char *)((int)big_font + ((col_marker * 6) + (5 - i) + (num * 192)))
        )
      );
      //GLCD_WriteData(0xff);
    }

  }
}