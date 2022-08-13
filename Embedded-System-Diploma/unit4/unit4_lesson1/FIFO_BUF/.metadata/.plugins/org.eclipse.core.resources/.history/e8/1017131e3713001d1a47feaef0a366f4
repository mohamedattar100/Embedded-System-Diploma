/*
 * fifo.h
 *
 *  Created on: Aug 2, 2022
 *      Author: Mohamed
 */

#ifndef FIFO_H_
#define FIFO_H_

#include <stdio.h>
#include <stdlib.h>

#define element_type unsigned int //(uint8_t or uint16_t or uint32_t)

typedef struct
{
	unsigned int length;
	element_type* head;
	element_type* base;
	element_type* tail;
	unsigned int count;
} FIFO_BUF_t;

typedef enum
{
	FIFO_NO_ERROR,
	FIFO_FULL,
	FIFO_EMPTY,
	FIFO_NOT_EMPTY,
	FIFO_NULL,
}FIFO_statuts_t;

FIFO_statuts_t FIFO_init(FIFO_BUF_t* fifo_buf , element_type* buf,unsigned int length);
FIFO_statuts_t FIFO_enqueue_item(FIFO_BUF_t* fifo_buf , element_type item);
FIFO_statuts_t FIFO_dequeue_item(FIFO_BUF_t* fifo_buf , element_type* item);
FIFO_statuts_t FIFO_is_full(FIFO_BUF_t* fifo_buf );
void FIFO_print(FIFO_BUF_t* fifo_buf);





#endif /* FIFO_H_ */





