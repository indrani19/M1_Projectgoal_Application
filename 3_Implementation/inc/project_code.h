/**
 * @file project_code.h
 * @author your name (Indrani V)
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __PROJECT_CODE_H__
#define __PROJECT_CODE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief genetates the header of the bill
 * @param[in] name
 * @param [in] date
 * 
 */
void generateBillHeader(char name[50], char date[30])

/**
 * @brief generates the body of the bill
 * @param [in] item
 * @param [in] qty
 * @param [in] price
 */
void generateBillBody(char item[30],int qty,float price)

/**
 * @brief generated the bill footer
 * @param [in] total
 * 
 */
void generateBillFooter(float total)
#endif  /* #define __PROJECT_CODE_H__ */