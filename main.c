#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d",&a,&b,&c);
  if(a>b>c){
    printf("%d",&a);
  }
  else{
    printf("%d",&b);
  }
  
  return 0;
}