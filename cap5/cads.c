#include <stdlib.h>
char* substring(char* s, int desde, int hasta){
  int n = hasta-desde;
  char* ret = (char*) malloc(n+1);
  int j = 0;
  for(int i = desde; i < hasta; i++){
    ret[j] = s[i];
    j+= 1;
  }
  ret[j] = '\0';
  return ret;
}
