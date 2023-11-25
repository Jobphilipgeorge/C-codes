#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <string.h>
int main()
{
int i;
void *shared_memory;
int shmid;
char buff[100];
shmid=shmget((key_t)2345,512,0666 | IPC_CREAT);
printf("Key of shared memory is %d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("+Process attached at %p\n",shared_memory);
printf("Enter some data to write to shared memory:\n");
scanf("%s",buff);
strcpy(shared_memory,buff);
printf("++ You wrote: %s\n",(char *)shared_memory);
}
