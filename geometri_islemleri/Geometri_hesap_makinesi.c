#include <stdio.h>
 #include <stdlib.h>
 int main() {
 printf("\n****GEOMETRI ISLEMLERI****\n\n\n");
 printf("1-Karenin Alani\n"); printf("2-Karenin Cevresi\n\n");
 printf("3-Dikdortgenin Alani\n"); printf("4-Dikdortgenin Cevresi\n\n");
 printf("5-Ucgenin Alani\n"); printf("6-Ucgenin Cevresi\n\n");
 printf("7-Dairenin Alani\n"); printf("8-Dairenin Cevresi\n\n");
 printf("9-Cemberin Alani\n"); printf("10-Cemberin Cevresi\n\n");
 printf("11-Yamugun Alani\n"); printf("12-Yamugun Cevresi\n\n");
 printf("13-Dik Prizmanin Alani\n"); printf("14-Dik Prizmanin Hacmi\n\n");
 int sayi;
 printf("yapacaginiz islemi seciniz: ");
 scanf("%d",&sayi);
 switch(sayi)
 {
 case 1:
 {int kenar,alan;
 printf("\nBir kenari girin: "); scanf("%d",&kenar);
 alan=kenar*kenar;
 printf("\nKarenin alani: %d",alan);} break;

 case 2:
 {int kenar,cevre;
 printf("\nBir kenari girin: "); scanf("%d",&kenar);
 cevre=4*kenar;
 printf("Karenin cevresi: %d",cevre);} break;

 case 3:
 {int uzunkenar,kisakenar,alan;
 printf("\nUzun kenari girin: "); scanf("%d",&uzunkenar);
 printf("Kisa kenari girin: "); scanf("%d",&kisakenar);
 alan=uzunkenar*kisakenar;
 printf("Dikdortgenin alani: %d",alan);} break;

 case 4:
 {int uzunkenar,kisakenar,cevre;
 printf("\nUzun kenari girin: "); scanf("%d",&uzunkenar);
 printf("Kisa kenari girin: "); scanf("%d",&kisakenar);
 cevre=2*(uzunkenar+kisakenar);
 printf("Dikdortgenin alani: %d",cevre);} break;

 case 5:
 {int yukseklik,taban,alan;
 printf("\nYukseklik giriniz: "); scanf("%d",&yukseklik);
 printf("Tabani giriniz: "); scanf("%d",&taban);
 alan=yukseklik*taban;
 printf("Ucgenin alaný: %d",alan);} break;

 case 6:
 {int a,b,c,cevre;
 printf("\n1. kenari giriniz: "); scanf("%d",&a);
 printf("2. kenari giriniz: "); scanf("%d",&b);
 printf("3. kenari giriniz: "); scanf("%d",&c);
 cevre=a+b+c;
 printf("Ucgenin cevresi: %d",cevre);} break;

 case 7:
 { double pi,yaricapi,alan;
 pi=3.14;
 printf("\nDairenin yaricapini giriniz: "); scanf("%lf",&yaricapi);
 alan=pi*yaricapi*yaricapi;
 printf("Dairenin alani: %lf",alan);} break;

 case 8:
 {double pi,yaricapi,cevre;
 pi=3.14;
 printf("\nDairenin yaricapini giriniz: "); scanf("%lf",&yaricapi);
 cevre=2*pi*yaricapi;
 printf("Dairenin cevresi: %lf",cevre);} break;

 case 9:
 {double pi,yaricapi,alan;
 pi=3.14;
 printf("\nCemberin yaricapini giriniz: "); scanf("%lf",&yaricapi);
 alan=pi*yaricapi*yaricapi;
 printf("Cemberin alani: %lf",alan);} break;

 case 10:
 {double pi,yaricapi,cevre;
 pi=3.14;
 printf("\nCemberin yaricapini giriniz: "); scanf("%lf",&yaricapi);
 cevre=2*pi*yaricapi;
 printf("Cemberin cevresi: %lf",cevre);} break;

 case 11:
 {double usttaban,alttaban,yukseklik,alan;
 printf("\nUst tabani giriniz: "); scanf("%lf",&usttaban);
 printf("Alt tabani giriniz: "); scanf("%lf",&alttaban);
 printf("Yukseklik: "); scanf("%lf",&yukseklik);
 alan=(usttaban+alttaban)*yukseklik/2;
 printf("Yamugun alani: %lf",alan);} break;

 case 12:
 {int a,b,c,d,cevre;
 printf("\n1. kenari giriniz: "); scanf("%d",&a);
 printf("2. kenari giriniz: "); scanf("%d",&b);
 printf("3. kenari giriniz: "); scanf("%d",&c);
 printf("4. kenari giriniz: "); scanf("%d",&d);
 cevre=a+b+c+d;
 printf("Yamugun cevresi: %d",cevre);} break;

 case 13:
 { int ta,tc,y,alan;
 printf("\nTaban alanini giriniz: "); scanf("%d",&ta);
 printf("Taban cevresi: "); scanf("%d",&tc);
 printf("Yukseklik giriniz: "); scanf("%d",&y);
 alan=2*ta+tc*y;
 printf("Dik prizmanin alani: %d",alan);} break;

 case 14:
 { int ta,y,hacim;
 printf("\nTaban alanini giriniz: "); scanf("%d",&ta);
 printf("Yuksekligi giriniz: "); scanf("%d",&y);
 hacim=ta*y;
 printf("Dik prizmanin hacmi: %d",hacim);} break;

 default: printf(" Hatali sayi girisi..."); break;
 }
 return 0;}

