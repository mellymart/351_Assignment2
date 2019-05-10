#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "simulator.cpp"

const int Max_time = 100000;

int Num_Process = 0;
int last= -1;
PROCESS* process_list;
process_queue* queue;
frame_list* framelist;

int main() {
  int pSize = 0;
  int mSize = 0;

  char* file_path= malloc(100* size of(char));

  user_input(&mSize, &pSize, file_path);

  process_list = read_process_list(filepath);

  queue = create_process_queue(num_of_process);

  frame = create_frame(mSize/ pSize, pSize);

  main_loop();

  return 0;
}
