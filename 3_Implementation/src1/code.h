/**
 * @file code.h
 * @author your name (Indrani V)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __CODE_H__
#define __CODE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief genetates the header of the bill
 * @param[in] name
 * @param [in] date
 * 
 */
void Billheader(char name[50], char date[30]);

/**
 * @brief generates the body of the bill
 * @param [in] item
 * @param [in] qty
 * @param [in] price
 */
void Billbody(char item[30],int quantity,float price);

/**
 * @brief generated the bill footer
 * @param [in] total
 * 
 */
void Billfooter(float total);
#endif  /* #define __CODE_H__ */
