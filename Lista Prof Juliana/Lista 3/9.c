#include <stdio.h>

int main(void) {

  int A[5] = {1,2,4,6,21};
  int B[8] = {2,3,6,7,9,11,15,20};
  int i, j;

  for(i=0;i<5;i++)
  {
    for(j=0;j<8;j++)
    {
      if (A[i] == B[j])
      {
        printf("%d\n", B[j]);
      }
    }
  }
   
  return 0;
}