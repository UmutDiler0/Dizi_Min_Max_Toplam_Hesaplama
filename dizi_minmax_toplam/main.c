#include <stdio.h>
#include <stdlib.h>
void minmax(int dizi[3][2],int i,int j)
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&dizi[i][j]);
        }
    }
}
void yazdirma(int dizi[3][2],int i,int j)
{
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d ",dizi[i][j]);
        }
    }
    printf("\n");
}
void hesaplama (int *toplam,int dizi[3][2],int *minimum,int *max)
{
    int j;
    int i;
    *toplam=0;
    *minimum=dizi[0][0];
    *max=dizi[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            if(dizi[i][j]>*max)
            {
                *max=dizi[i][j];
            }
            if(dizi[i][j]<*minimum)
            {
               *minimum=dizi[i][j];
            }
            *toplam=*toplam+dizi[i][j];

        }
    }
    printf("%d\n%d\n%d",*max,*minimum,*toplam);
}




int main()
{
    int i,j,minimum,max;
    int dizi[3][2];
    int toplam=0;
    minmax(&dizi,i,j);
    yazdirma(&dizi,i,j);
    hesaplama(&toplam,dizi,&minimum,&max);






    return 0;
}
