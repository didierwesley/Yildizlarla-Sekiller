#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,giris,yildiz;

    printf("Bir sayi giriniz: ");
    scanf("%d",&giris);
    yildiz=giris;
    for(i=1;i<=giris;i++){
            for(j=0;j<i;j++){
                printf("* ");


            }
            printf("\n");



}

    return 0;
}
