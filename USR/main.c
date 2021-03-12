#include "oled.h"
#include "bsp_led.h"
#include "sys.h"
#include "delay.h"
#include "bmp.h"


 int main(void)
 {	
	 u8 t;
		delay_init();	    	 //��ʱ������ʼ��	  
		NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ� 	LED_Init();			     //LED�˿ڳ�ʼ��
		OLED_Init();			//��ʼ��OLED  
	 LED_GPIO_Config();
		OLED_Clear()  	; 
	while(1) 
	{			
		delay_ms(1000);
		//OLED_Clear();
		delay_ms(1000);
		OLED_DrawBMP(0,0,128,8,BMP1);  //ͼƬ��ʾ(ͼƬ��ʾ���ã����ɵ��ֱ�ϴ󣬻�ռ�ý϶�ռ䣬FLASH�ռ�8K��������)
		delay_ms(1000);
		OLED_DrawBMP(0,0,128,8,BMP2);
		LED1_TOGGLE;
	}	  
	
}
