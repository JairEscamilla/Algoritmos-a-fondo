#include <stdio.h>
#include <string.h>
int main(){
  char s[] = "Juan|Marcos|Carlos|Matias";
  char* tok;
  // Primera llamada
  tok = strtok(s, "|");
  while (tok != NULL) {
    printf("%s\n", tok);
    // Llamadas subsiguientes
    tok = strtok(NULL, "|");
  }
  return 0;
}
