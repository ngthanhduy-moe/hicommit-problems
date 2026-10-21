#include <stdio.h>

int main() {
  int a;

  printf("Nhap so nguyen: , %d");
  scanf("%d",&a);

  if(a%2){
    printf("LE");
  }
  else{
    printf("CHAN");
  }
  return 0;
}