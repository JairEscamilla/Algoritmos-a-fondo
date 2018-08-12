#include <stdio.h>
int main(){
  FILE* f1 = fopen("archivo1.dat", "r+");
  FILE* f2 = fopen("archivo2.dat", "w+");
  char c;
  while ((c == getc(f1)) != EOF) {
    putc(c, f2);
  }
  fclose(f2);
  fclose(f1);

  return 0;
}
