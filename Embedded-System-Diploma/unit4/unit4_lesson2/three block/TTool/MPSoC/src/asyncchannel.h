#ifndef ASYNCCHANNEL_H
#define ASYNCCHANNEL_H

struct asyncchannel;

#include "message.h"
#include "request.h"


struct asyncchannel {
  char *outname;
  char *inname;
  int isBlocking; // In writing. Reading is always blocking
  int maxNbOfMessages; //
  struct request* outWaitQueue;
  struct request* inWaitQueue;
  message *pendingMessages;
  int currentNbOfMessages;
  struct mwmr_s *mwmr_fifo;
};

typedef struct asyncchannel asyncchannel;

asyncchannel *getNewAsyncchannel(char *inname, char *outname, int isBlocking, int maxNbOfMessages, struct mwmr_s *fifo);
void destroyAsyncchannel(asyncchannel *syncch);
message* getAndRemoveOldestMessageFromAsyncChannel(asyncchannel *channel);
void addMessageToAsyncChannel(asyncchannel *channel, message *msg);

#endif
