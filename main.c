#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
   if (argc == 1) {
        int n =1;
        while(n<=10){
          printf("%d\n",n);
          n++;
      }
      return 0;
    }
    else if(argc !=1){
      int n =1;
        while(n<= atoi(argv[1])){
          printf("%d\n",n);
          n++;
      }
      return 0;
    }
    return 0;
}
// Cooldown en f() des parametres