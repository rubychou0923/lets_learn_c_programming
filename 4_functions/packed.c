#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char sample;
  short sample2;
  int beam_id;
  int freq;
  int band_width;

} __attribute__((packed)) DATA;


main(){
      void changer(int);
      int i;
      DATA test;
      int *ptr;

      test.sample='a';
      test.sample2=55;
      test.beam_id=10;
      test.freq=484986;
      test.band_width=100;

      printf("sizeof(char):%d, sizeof(short)=%d, sizeof(int)=%d\n",sizeof(char),sizeof(short), sizeof(int));
      printf("&test.sample=0x%x\n&test.sample2=0x%x, &test.beam_id=0x%x\n&test.freq=0x%x\n&test.band_width=0x%x\n",&test.sample,&test.sample2,&test.beam_id,&test.freq,&test.band_width);

      ptr=&test.band_width;

      *ptr=80;

      printf("ptr=0x%x\n, test.band_width=%d\n",ptr,test.band_width); 

      i = 5;
      printf("before i=%d\n", i);
      changer(i);
      printf("after i=%d, &i=0x%x\n", i,&i);
      exit(EXIT_SUCCESS);
}

void
changer(int x){
 
      while(x){
              printf("changer: x=%d, &x=0x%x\n", x, &x);
              x--;
      }
}
