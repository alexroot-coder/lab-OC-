//Monte-Carlo pi calculate
#include "moncar.h"

int main(int argc, char *argv[]){
  long int x, y, r;
  long int cnt, qnt, res_qnt=0;
  srand(time(NULL));
  if (argc > 1) {
    sscanf(argv[1], "%i", &qnt);
  } else {
    qnt = 10000000;
  }
  r = RAND_MAX;
  {
    for(cnt = 0; cnt < qnt; cnt++) {
      x = rand();
      y = rand();
      if(x * x + y * y <= r * r)
	res_qnt++;
    }
  }
  printf("%10.8f\n", (double) res_qnt * 4 / qnt);
}
