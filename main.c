#include <stdio.h>

int main() {
float dtb;
int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if ( dtb >=9.0 && drl >=90 ){
    printf("HOC_BONG_XUAT_SAC");}
  else if ( 8.0 <= dtb && drl <= 80){
    printf("HOC_BONG_GIOi");}
  else if ( 7.0 <= dtb && drl <= 70){
    printf("HOC_BONG_KHA");}
  else if ( dtb < 7.0 && drl < 70 ){
    printf("KHONG_DAT");}
  return 0;
}