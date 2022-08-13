/*
 * lifo.h
 *
 *  Created on: Aug 2, 2022
 *      Author: Mohamed
 */

#ifndef LIFO_H_
#define LIFO_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct {
	unsigned int length;
	unsigned char* base;
	unsigned char* head;
	unsigned int count;
}LIFO_BUF_t;

typedef enum
{
	LIFO_NO_ERROR,
	LIFO_FULL,
	LIFO_EMPTY,
	LIFO_NOT_EMPTY,
	LIFO_NULL,
}lifo_statuts_t;


lifo_statuts_t LIFO_add_item(LIFO_BUF_t* lifo_buf , unsigned int item);
lifo_statuts_t LIFO_get_item(LIFO_BUF_t* lifo_buf , unsigned int* item);
lifo_statuts_t LIFO_init(LIFO_BUF_t* lifo_buf , unsigned int* buf,unsigned int length);



#endif /* LIFO_H_ */
