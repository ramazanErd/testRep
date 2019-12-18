#include<stdio.h>
#include<conio.h>

int main()
{
  

        int toplam=0;
        int i,j;
        int matris[3][5] ;

/************************************************** 3x5 lik MATRİSİ ALDIK*********************************************/           
        printf("3x5 lik matrisinizi girin");

            for(i=0;i<3;i++)
            {
                for(j=0;j<5;j++)
                    scanf("%d",&matris[i][j]);                
            }

/**************************************************MATRİSİ EKRANA YAZDIRDIK*******************************************/
        for ( i = 0; i < 3; i++)
        {
            for (j = 0;j < 5; j++)
            {
            
                printf("-%d-",matris[i][j]);
            }
        printf("\n"); 

}

/**************************************************MATRİSİN İÇİNDE GEZİNİYORUZ*****************************************/
for (j = 0; j < 5; j++)
{
    for(i=0;i<3;i++)
    {
        toplam+=matris[i][j];                   ///   MATRİSİN STUNLARINI TOPLUYIP EKRANA YAZDIRIYORUZ   ///
    }
    
    printf("toplam =%d ",toplam);     
    toplam=0;                                   ///   HER STUNU AYRI AYRI TOPLAYACAGIMIZ İÇİN TOPLAM DEGİSKENİNİ 0 LIYORUZ   ///
}



 
 
    
    getch();
    return 0;

}