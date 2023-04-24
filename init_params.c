#include "main.h"
/**
 * init_params - reset to defult 
 * @param: struct to reset
 * Return: void
 */
void init_params(param_t *param)
{
	param->plusFlag = 0;
	param->h_modifier = 0;
	param->hashFlag = 0;
	param->L_modifier = 0;
	param->minsFlag = 0;
	param->width = 0;
	param->l_modifier = 0;
	param->plusFlag = 0;
	param->zeroFlag = 0;
	param->unsign = 0;
	param->precision = UINT_MAX;
}
