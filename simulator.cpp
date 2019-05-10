
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void main_loop() {
  long virtual_clock = 0;

do{
  enque_new_prcoess(virtual_clock);

  process_done_end(virtual_clock);

  assign_mem_to_process(virtual_clock);

  virtual_clock++;

  if ( virtual_clock> Max_Time) {
    printf("max time reached\n");
    break;
  }

  if (queue->size == 0 && frame_empty(framelist)) {
    break;
  }
print_turnaround();

}while (true);



void enqueue_process(int virtual_clock){
int x;
PROCESS* proc;

for (i=0; i<)
}

void terminate_process(int virtual_clock){

}

void assign_mem(int virtual_clock){

}lu

char*get_announcement(){

}

void prnt_turnaroundt(){

}
