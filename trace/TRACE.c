#include "MOTOR.h"
#include "gpio.h"
#include "tim.h"
#include "usart.h"
#include "TRACE.h"

//12，13，14，15；
//2 ，1 ，3 ，4
void Trace(void)
{
if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==RESET)//hei//中间两
	{
		SetSpeed(350,350);
	}
	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==SET)
	{
		SetSpeed(200,350);
	}
	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==RESET)
	{
		SetSpeed(350,200);
	}
/*	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==SET)//bai
	{
		SetSpeed(0,0);
	}*/
	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)==SET)
	{
		SetSpeed(0,400);
	}
		else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)==SET)
	{
		SetSpeed(0,400);
	}
	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)==RESET)
	{
		SetSpeed(400,0);
	}
//	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)==SET)
//	{
//		SetSpeed(0,400);
//	}
	else if(HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_12)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_13)==SET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_14)==RESET&&HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_15)==RESET)//右边两个黑
	{
		SetSpeed(400,0);
	}
}

