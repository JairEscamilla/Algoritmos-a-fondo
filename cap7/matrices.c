#include <stdio.h>
int main(){
  int m[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  for(int i = 0; i <= 3; i++){
    for(int j = 0; j <= 2; j++){
      printf("%d, ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}
