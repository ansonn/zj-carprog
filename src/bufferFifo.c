/*
** for zj-carprog 
** buffer fifo
*/
#include "basedef"



int getLength(struct bufQueue *q)
{
	return 
}

void bufQInit(struct bufQueue *q)
{
	memset(q, 0x00, sizeof(struct bufQueue));
}

bool bufQIsfull(struct bufQueue *q)
{
	return (p->insertPos - p->removePos) == MAX_FRAME_BUFFER;
}

bool bufQIsNonempty(struct bufQueue *q)
{
	return q->insertPos != q->removePos;
}

unsigned int bufQSize(struct bufQueue *q)
{
	return q->insertPOs - q->removePos;
}

void bufQPush(struct bufQueue *q, struct frameBuffer *elm)
{
	assert(!bufQIsFull);
	q->elmPool[(q->insertPos++) % MAX_FRAME_BUFFER] = elm;
}

struct frameBuffer *bufQPop(struct bufQueue *q)
{
	assert(!bufQIsempty());
	return q->elmPool[(p->removePos++) % MAX_FRAME_BUFFER];
}

struct frameBuffer *bufQCurrent(struct bufQueue *q)
{
	assert(!bufQIsempty());
	return q->elmPool[(p->removePos) % MAX_FRAME_BUFFER];
}


