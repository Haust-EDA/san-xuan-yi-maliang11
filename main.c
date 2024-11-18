#include "stm32f10x.h"               
#include "Delay.h"
#include "OLED.h"              
#include "Key.h"
int main(void)
{
	Key_Init();
	OLED_Init();	
	while (1)
	{
		swtich(KeyNum)
		{  case 1:
		   {
            OLED_Clear();
			Delay_ms(10);
			OLED_ShowString(1, 1, "我靠NB");
			break;
           }
           case 2:
		   {
			OLED_Clear();
			Delay_ms(10);
			OLED_ShowString(1, 1, "电协NB");
			break;
		   }
            case 3:
		   {  
            OLED_Clear();
			Delay_ms(10);
			OLED_ShowString(1, 1, "老子最NB");
			break;
		   }
		   case 4:
		   {   
            OLED_Clear();
			Delay_ms(10);
			OLED_ShowString(1, 1, "耶耶耶");
			break;
		   }
        }
	}
}

uint8_t Key_GetNum(void)
{
	uint8_t KeyNum = 0;		
	
	if (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_1) == 0)			
	{
		Delay_ms(20);											
		while (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_1) == 0);	
		Delay_ms(20);											
		KeyNum +=;											
	}
	return KeyNum;
}
