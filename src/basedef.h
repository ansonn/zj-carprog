/*
** for zj-carprog basedef
*/


#ifndef _BASEDEF_H
#define _BASEDEF_H

#define MAX_FRAME_BUFFER 32

struct frameBuffer
{
	const void *buffer;
}

struct bufQueue
{
	struct frameBuf *elmPool[MAX_FRAME_BUFFER];
	unsigned insertPos;
	unsigned removePos;
};




#endif

