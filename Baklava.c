#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,giris,yildiz,bosluk;

    printf("Bir sayi giriniz: ");
    scanf("%d",&giris);
    bosluk=giris-1;
    yildiz=1;
    for(i=0;i<giris;i++){
            for(j=0;j<bosluk;j++){
                printf(" ");
            }
            for(j=0;j<yildiz;j++){
                printf("*");
            }
            printf("\n");
            bosluk--;
            yildiz+=2;


}
yildiz-=4;
bosluk=1;
  for(i=0;i<giris-1;i++){
            for(j=0;j<bosluk;j++){
                printf(" ");
            }
            for(j=0;j<yildiz;j++){
                printf("*");
            }
            printf("\n");
            bosluk++;
            yildiz-=2;


}
    return 0;
}
