/* example library module */
/* only 'callable' is visible outside */
static int buf [100];
static int length;
static void fillup(void);

int
callable (){
      if (length ==0){
              fillup ();
      }
      return (buf [length--]);
}

static void
fillup (void){
      while (length <100){
              buf [length++] = 0;
      }
}