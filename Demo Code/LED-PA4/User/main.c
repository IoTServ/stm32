#include "ALL_Includes.h"//���������ͷ�ļ�

void ALL_Config(void);


int main(void)
{	
	ALL_Config();
	
	while(1)
	{
			LED_OFF();
			delay_ms(100);
			LED_ON();
			delay_ms(100);

	}
}

/************************
�������ܣ��ܳ�ʼ��
�����������
�����������
��    ע����
************************/
void ALL_Config(void)
{
    Delay_Init(48);
		LED_Init();
}






