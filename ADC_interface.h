/***************************************************************************************************************************************************************************************/
/************************************************* SWE     : ADC DRIVER    *************************************************************************************************************/
/************************************************* BY      : Youssef Ayman *************************************************************************************************************/
/************************************************* Date    : 27Aug20       *************************************************************************************************************/
/************************************************* Version : v1.0          *************************************************************************************************************/
/***************************************************************************************************************************************************************************************/


# ifndef ADC_INTERFACE_H
# define ADC_INTERFACE_H


typedef enum
{
	Channel_A0,
	Channel_A1,
	Channel_A2,
	Channel_A3,
	Channel_A4,
	Channel_A5,
	Channel_A6,
	Channel_A7,


}et_ADC_Channel ;

void ADC_VidInit (void);

u16 ADC_u16GetChannelReading (u8 Copy_u8Channel);


# endif
