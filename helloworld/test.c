#include <stdlib.h>
#include "hal.h"

int main(void){
  hal_setup(CLOCK_BENCHMARK);
  hal_send_str("Hello SPACE 2022!\n");

  return 0;
}
