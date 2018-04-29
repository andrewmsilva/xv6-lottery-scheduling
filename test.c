#include "types.h"
#include "stat.h"
#include "user.h"
#include "rand.c"

#define N 10

int main(){
  int pids[N], i;

  /* Start children. */
  for(i=0;i<N;++i) {
    int t = 10+(rand() % 40);
    //int t = 0;
    if ((pids[i] = fork(t)) < 0)
      return 0;
    else if (pids[i] == 0)
      for(;;);
  }
  wait();
  return 0;
}
