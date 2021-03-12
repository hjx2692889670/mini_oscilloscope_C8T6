#include "oled.h"
#include "bsp_led.h"
#include "sys.h"
#include "delay.h"
#include "bmp.h"


 int main(void)
 {	
	 u8 t;
		delay_init();	    	 //延时函数初始化	  
		NVIC_Configuration(); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级 	LED_Init();			     //LED端口初始化
		OLED_Init();			//初始化OLED  
	 LED_GPIO_Config();
		OLED_Clear()  	; 
	while(1) 
	{			
		delay_ms(1000);
		//OLED_Clear();
		delay_ms(1000);
		OLED_DrawBMP(0,0,128,8,BMP1);  //图片显示(图片显示慎用，生成的字表较大，会占用较多空间，FLASH空间8K以下慎用)
		delay_ms(1000);
		OLED_DrawBMP(0,0,128,8,BMP2);
		LED1_TOGGLE;
	}	  
	
}
