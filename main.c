#include <stdio.h>

int main() {
float dtb;
int drl;
  scanf("%f",&dtb);
  scanf("%d",&drl);
  if(dtb >=9.0 || dtb <=10.0 && drl >=90 || drl <= 100){
    printf("HOC_BONG_XUAT_SAC");
  }else if(dtb>=8.0 || dtb < 9.0 && drl>=80 || drl<90){
    printf("HOC_BONG_KHA");
  }else if(dtb >=7.0 || dtb<8.0 && drl>=70 || drl<80){
    printf("HOC_BONG_TRUNG_BINH");
  }else(dtb<7.0 && drl<70){
    printf("KHONG_DAT");
  }
}