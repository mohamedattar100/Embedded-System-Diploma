/*
 * fifo.c
 *
 *  Created on: Aug 2, 2022
 *      Author: Mohamed
 */

#include "fifo.h"

FIFO_statuts_t FIFO_init(FIFO_BUF_t* fifo_buf , element_type* buf,unsigned int length){
	if(buf == NULL)return FIFO_NULL;
	fifo_buf->base = buf;
	fifo_buf->head = fifo_buf->base;
	fifo_buf->tail =fifo_buf->base;
	fifo_buf->count = 0;
	fifo_buf->length = length;
	return FIFO_NO_ERROR;

}


FIFO_statuts_t FIFO_enqueue_item(FIFO_BUF_t* fifo_buf , element_type item){

	if(FIFO_is_full(fifo_buf ) == FIFO_NO_ERROR){
	*(fifo_buf->head)=item;
	fifo_buf->count++;
	if(fifo_buf->head==(fifo_buf->base+(fifo_buf->length * sizeof(element_type))))
		fifo_buf->head=fifo_buf->base;
	else
	 fifo_buf->head++;
	return FIFO_NO_ERROR;
	}
	else
		return (FIFO_is_full(fifo_buf));

}


FIFO_statuts_t FIFO_dequeue_item(FIFO_BUF_t* fifo_buf , element_type* item){

	if (! fifo_buf->head || ! fifo_buf->base || ! fifo_buf->tail)
			return FIFO_NULL;

		if(fifo_buf->count==0)
			return FIFO_EMPTY;

		*item = *(fifo_buf->tail);
		fifo_buf->count--;

		if(fifo_buf->tail==(fifo_buf->base+(fifo_buf->length * sizeof(element_type))))
			fifo_buf->tail=fifo_buf->base;
		else
			fifo_buf->tail++;

		return FIFO_NO_ERROR;
	}


FIFO_statuts_t FIFO_is_full(FIFO_BUF_t* fifo_buf ){

	if (! fifo_buf->head || ! fifo_buf->base || ! fifo_buf->tail)return FIFO_NULL;
	if ( fifo_buf->count>= fifo_buf->length)
		{
			printf("fifo is full\n");
			return FIFO_FULL;
		}
		return FIFO_NO_ERROR;
	}

	void FIFO_print(FIFO_BUF_t* fifo_buf){

		element_type* temp;
		if(fifo_buf->count==0)
			printf("fifo is empty\n");
		temp=fifo_buf->tail;

		int i;
		for(i=0;i<fifo_buf->length;i++)
		{
			printf("element number %d is  %x \n",i,*temp);
			temp++;
		}
	}





