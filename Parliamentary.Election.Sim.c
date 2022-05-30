#include <stdio.h>
#include <stdlib.h>

int toplampartimv_hesaplama(int toplamPartimv_sayisi[],int mv_sayisi[])
{
    int i;
         for(i=0;i<6;i++)
                    {
                        toplamPartimv_sayisi[i] += mv_sayisi[i];
                    }
                    return toplamPartimv_sayisi[6];

}



void iktidarBelirle(int toplamPartimv_sayisi[],int partiIsim[])
{
    int i,j,gecici,gecici2;
                    for(i=0; i<5; i++)
                    for(j=0; j<5; j++)
                    if( toplamPartimv_sayisi[j]<toplamPartimv_sayisi[j+1] )
                    {                    gecici = toplamPartimv_sayisi[j];
                    toplamPartimv_sayisi[j] = toplamPartimv_sayisi[j+1];
                    toplamPartimv_sayisi[j+1] = gecici;



                    gecici2=partiIsim[j];
                    partiIsim[j]=partiIsim[j+1];
                    partiIsim[j+1]=gecici2;



                    }

                    printf("Iktidar Partisi: %c Partisi\n", (char)partiIsim[0]);
                    printf("Ana Muhalefet Partisi: %c Partisi", (char)partiIsim[1]);
}


// sayaç ekleme yaparak partisayisi kadar döngü dönüp aldýðý ilk partideðerini bir sonraki ile toplayarak devam eder

int toplamOyHesapla(int toplam_oySayilari[],int oySayisi[])
{
    int i;
                for(i=0;i<6;i++)
                {
                    toplam_oySayilari[i] += oySayisi[i];
                }

}


int main()

{
        int plakaKodu,mvKontenjani,i,j,gecici,gecici2,gecici3,gecici4,gecici5,gecici6,gecici7;
        int t = 0,Birincilik=1;
        float gecerliOy  = 0,toplamOy=0, toplammv_sayisi=0;
        float oyYuzde = 0,mvYuzde = 0;


        int ch = 65;
        int sayac=0;
        int parti_Isim[6];
        int oySayisi[6];
        int mv_sayisi[6];
        int mv_OySayisi[6];
        int toplam_OySayisi[6];
        int toplamPartimv_sayisi[6];
        int ilBirinci[6];
        int dusuk_mvSayisi[6];
        int toplam_oySayilari[6];



        for(i=0;i<6;i++)
        {


            parti_Isim[i] = ch;
            ch++;
        }

         for(i=0;i<6;i++)
                {
                    toplamPartimv_sayisi[i] = 0;
                    ilBirinci[i] = 0;
                    dusuk_mvSayisi[i] = 0;
                    toplam_oySayilari[i] = 0;
                }



        do{
        	system("PAUSE");
        	printf("\n"); 
        	sayac++;
        	
        if(sayac<6){
                printf("Sehir kodunu giriniz:  ");
                scanf("%d",&plakaKodu);
		}
                if(sayac>5){


                        printf("Turkiye Geneli: \n");
                        printf("Milletvekili Kontenjani: %.0f\n",toplammv_sayisi);
                        printf("Toplam Oy Sayisi: %.0f\n",toplamOy);
                        printf("\n");

                                printf("\t");
                                printf("       Oy Say\t");
                                printf(" Oy Yuzde\t");
                                printf("Toplam Mv Say\t");
                                printf(" Mv Yuzde\t ");
                                printf("Il 1.lik Say\t ");
                                printf("         \n");
                                printf("\t");
                                printf("      ---------\t");
                                printf(" ---------\t");
                                printf(" ---------\t");
                                printf("---------\t");
                                printf("---------\t");
                                printf("         \t");
                                printf("\n");



                        for(i=0;i<6;i++)
                        {
                                printf("%c partisi: \t", (char)parti_Isim[i]);
                                printf("%d \t ",toplam_oySayilari[i]);
                                oyYuzde = (toplam_oySayilari[i] * 100) / toplamOy;
                                printf("%.2f \t  ",oyYuzde);
                                printf("           %d \t  ",toplamPartimv_sayisi[i]);
                                mvYuzde = (toplamPartimv_sayisi[i] * 100) / toplammv_sayisi;
                                printf("         %.2f  \t ",mvYuzde);
                                printf("   %d  \t ",ilBirinci[i]);
                                printf("              \n");




                        }

                    iktidarBelirle(toplamPartimv_sayisi,parti_Isim);

                        break;

                }
                do{
                printf("Milletvekili Kontenjanini giriniz(1-20):  ");
                scanf("%d",&mvKontenjani);
                }
                while(mvKontenjani<=0 || mvKontenjani>20);


                toplammv_sayisi  += mvKontenjani;

                for(i=0;i<6;i++)
                {
                    mv_sayisi[i] = 0;
                }

                gecerliOy = 0;


                for(i=0;i<6;i++)
                {

                    printf("%c Partisinin Oy Sayisini Giriniz:  ",(char)parti_Isim[i]);
                    scanf("%d",&oySayisi[i]);

                      gecerliOy += oySayisi[i];


                }
                toplamOy+= gecerliOy;

                toplamOyHesapla(toplam_oySayilari,oySayisi);


                printf("\n");
                printf("Il plaka Kodu: %d\n",plakaKodu);


                printf("Milletvekili Kontenjani: %d\n",mvKontenjani);
                printf("Gecerli Oy Sayisi: %.0f\n",gecerliOy);



                    for(i=0; i<5; i++)
                    for(j=0; j<5; j++)
                    if( oySayisi[j]<oySayisi[j+1] )
                    {
                    gecici = oySayisi[j];
                    oySayisi[j] = oySayisi[j+1];
                    oySayisi[j+1] = gecici;

                    gecici2 = parti_Isim[j];
                    parti_Isim[j] = parti_Isim [j+1];
                    parti_Isim[j+1] = gecici2;

                    gecici3 = mv_sayisi[j];
                    mv_sayisi[j]  = mv_sayisi[j+1];
                    mv_sayisi[j+1]  =  gecici3;

                     gecici5 = ilBirinci[j];
                     ilBirinci[j] = ilBirinci[j+1];
                     ilBirinci[j+1] = gecici5;

                     gecici6 =  dusuk_mvSayisi[j];
                     dusuk_mvSayisi[j] = dusuk_mvSayisi[j+1];
                     dusuk_mvSayisi[j+1] = gecici6;

                    }

                    ilBirinci[0] += 1;


                        for(i=0;i<6;i++)
                            {
                                mv_OySayisi[i] = oySayisi[i];
                            }

                    for(;;){
                        mv_OySayisi[0] = mv_OySayisi[0]/2;
                        mv_sayisi[0] += 1;
                        mvKontenjani--;




                        for(i=0; i<5; i++)

                        for(j=0; j<5; j++)
                        {
                        if( mv_OySayisi[j]<mv_OySayisi[j+1] )
                        {
                        gecici = oySayisi[j];
                        gecici4 = mv_OySayisi[j];
                        gecici2 = parti_Isim[j];
                        gecici3 = mv_sayisi[j];
                        oySayisi[j] = oySayisi[j+1];
                        mv_OySayisi[j] = mv_OySayisi[j+1];
                        parti_Isim[j] = parti_Isim [j+1];
                        mv_sayisi[j]  = mv_sayisi[j+1];
                        oySayisi[j+1] = gecici;
                        mv_OySayisi[j+1] = gecici4;
                        parti_Isim[j+1] = gecici2;
                        mv_sayisi[j+1]  =  gecici3;

                        }
                        }
                        
                    if(mvKontenjani == 0)
                        break;
                    }


                    for(i=0; i<5; i++)
                    for(j=0; j<5; j++)
                    if( oySayisi[j]<oySayisi[j+1] )
                    {
                    gecici = oySayisi[j];
                    gecici2 = parti_Isim[j];
                    gecici3 = mv_sayisi[j];

                    oySayisi[j] = oySayisi[j+1];
                    parti_Isim[j] = parti_Isim [j+1];
                    mv_sayisi[j]  = mv_sayisi[j+1];

                    oySayisi[j+1] = gecici;
                    parti_Isim[j+1] = gecici2;
                    mv_sayisi[j+1]  =  gecici3;
                    }


                      for(i=0;i<6;i++){

                            if(mv_sayisi[i]==0)
                            {
                                dusuk_mvSayisi[i] +=1;
                            }


                    }


                    printf("\t");
                    printf("        Oy Say\t");
                    printf("        Oy Yuzde\t");
                    printf("Mv Say\t");
                    printf("\n");
                    printf("\t");
                    printf("      ---------\t");
                    printf("      ---------\t");
                    printf("      ---------\t");
                    printf("\n");
                    for(i=0;i<6; i++){

                    printf("%c partisi:\t ", (char)parti_Isim[i]);
                    printf("%d \t \t",oySayisi[i]);
                    oyYuzde = (oySayisi[i] * 100) / gecerliOy;
                    printf("%.2f\t \t",oyYuzde);
                    printf("%d\n",mv_sayisi[i]);



                    }

                    printf("\n");




                                for(i=0;i<6;i++)
                              {
                                       for(j=0;j<6;j++)
                                       {
                                             if(parti_Isim[i]<=parti_Isim[j])
                                             {

                                                    gecici=parti_Isim[i];
                                                    parti_Isim[i]=parti_Isim[j];
                                                    parti_Isim[j]=gecici;

                                                    gecici4 = mv_sayisi[i];
                                                    mv_sayisi[i] = mv_sayisi[j];
                                                    mv_sayisi[j] = gecici4;

                                                    gecici2 = ilBirinci[i];
                                                    ilBirinci[i] = ilBirinci[j];
                                                    ilBirinci[j] = gecici2;

                                                    gecici3 =  dusuk_mvSayisi[i];
                                                    dusuk_mvSayisi[i] = dusuk_mvSayisi[j];
                                                    dusuk_mvSayisi[j] = gecici3;
                                                    }
                                         }
                              }

                    toplampartimv_hesaplama(toplamPartimv_sayisi,mv_sayisi);


        }
            while(1);



    return 0;
}
