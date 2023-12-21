#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char sample;
  short sample2;
  int freq;
  char beam_id;
  int band_width;
} __attribute__((packed)) DATA;



typedef struct {
  char sample;
  short sample2;
  int freq;
  char beam_id;
  int band_width;
}DATA2;

main(){
      void changer(int);
      int i;
      DATA test;
      DATA2 test2;
      int *ptr;

      test.sample='a';
      test.sample2=55;
      test.beam_id=10;
      test.freq=484986;
      test.band_width=100;

      printf("sizeof(char):%d, sizeof(short)=%d, sizeof(int)=%d\n\n",sizeof(char),sizeof(short), sizeof(int));
      printf("&test.sample=0x%x\n&test.sample2=0x%x, &test.freq=0x%x\n&test.beam_id=0x%x\n&test.band_width=0x%x\n",&test.sample,&test.sample2,&test.freq,&test.beam_id,&test.band_width);

      test2.sample='a';
      test2.sample2=55;
      test2.beam_id=10;
      test2.freq=484986;
      test2.band_width=100;

      printf("\n");
      printf("&test2.sample=0x%x\n&test2.sample2=0x%x, &test2.freq=0x%x\n&test2.beam_id=0x%x\n&test2.band_width=0x%x\n",&test2.sample,&test2.sample2,&test2.freq,&test2.beam_id,&test2.band_width);

      exit(EXIT_SUCCESS);
}
