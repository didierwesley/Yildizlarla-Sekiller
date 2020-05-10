
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i,j,giris,yildiz,bosluk;

    printf("Bir sayi giriniz: ");
    scanf("%d",&giris);
    bosluk=0;
    yildiz=2*giris-1;

for(i=giris;i>=1;--i){
            for(j=0;j<bosluk;++j){
                printf(" ");
            }
            for(j=0;j<yildiz;++j){
                printf("*");
            }
            printf("\n");
            bosluk++;
            yildiz-=2;


}
    return 0;
}
