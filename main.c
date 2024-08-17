#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main(void) {
int sayi,a;
float x,x2,x3,y,r,h,h2,alan,hacim;
//x uzunluk,r yarýcap,h yukseklik,h2 ucgen prizmadaki ucgenin yuksekligi,x2 ve x3 ucgen prizmadaki ucgenin kenar uzunluklarý//
printf("Alan ve hacmini hesaplamak istediginiz seklin numarasini giriniz.");
printf("\nKup icin 1'i\nSilindir icin 2'yi\nKure icin 3'u\nKoni icin 4'u\nDikdortgen prizma icin 5'i\nUcgen prizma icin 6'yi\nKare prizma icin 7'yi tuslayin: \n");
scanf("%d",&sayi);
	switch(sayi){
		case 1:
			printf("Kupun alanini hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
					printf("Kupun bir kenar uzunlugunu girin: ");
					scanf("%f",&x);
					alan=6*x*x;
					printf("Kupun alani= %f\n\n",alan);}
				else
					if(a==2){
					printf("Kupun bir kenar uzunlugunu girin: ");
					scanf("%f",&x);
					hacim=x*x*x;
					printf("Kupun hacmi= %f\n\n",hacim);}
				else
					printf("\nGecersiz sayi girdiniz!\n\n");
					
				break;
		case 2:
			printf("Silindirin alanini hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
					printf("Sirasiyla silindirin yaricapini ve yuksekligini giriniz: ");
					scanf("%f%f",&r,&h);
					alan=(2*PI*r*h)+(2*PI*r*r);
					printf("Silindirin alani= %f\n\n",alan);}
				else
					if(a==2){
					printf("Sirasiyla silindirin yaricapini ve yuksekligini giriniz: ");
					scanf("%f%f",&r,&h);
					hacim=PI*r*r*h;
					printf("Silindirin hacmi= %f\n\n",hacim);}
				else{
					printf("\nGecersiz sayi girdiniz!\n\n");}	
				break;
		case 3:
			printf("Kurenin alanini hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
				printf("Kurenin yaricapini giriniz: ");
				scanf("%f",&r);
				alan=4*PI*r*r;
				printf("Kurenin alani= %f\n\n",alan);}
				else
					if(a==2){
					printf("Kurenin yaricapini giriniz: ");
					scanf("%f",&r);
					hacim=PI*r*r*r*4/3;
					printf("Kurenin hacmi= %f\n\n",hacim);}
				else{
					printf("\nGecersiz deger girdiniz!\n\n");}	
				break;		
		case 4:
			printf("Koninin alanini hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
				printf("Sirasiyla koninin bir kenar uzunlugunu ve yaricapini giriniz: ");
				scanf("%f%f",&x,&r);
				alan=(PI*r*r)*(2*PI*r*x);
				printf("Koninin alani= %f\n\n",alan);}
				else
					if(a==2){
					printf("Sirasiyla koninin yaricapini ve yuksekligini giriniz: ");
					scanf("%f%f",&r,&h);
					hacim=PI*r*r*h*1/3;
					printf("Koninin hacmi= %f\n\n",hacim);}
				else{
					printf("\nGecersiz sayi girdiniz!\n\n");}		
				break;	
		case 5:
			printf("Dikdortgenler prizmasinin alanini hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
					printf("Sirasiyla dikdortgenler prizmasinin iki kenar uzunlugunu ve yuksekligini giriniz: ");
					scanf("%f%f%f",&x,&y,&h);
					alan=2*(x*y+x*h+y*h)*(x*y+x*h+y*h);
					printf("Dikdortgenler prizmasinin alani= %f\n\n",alan);	}
				else
					if(a==2){
					printf("Sirasiyla dikdortgenler prizmasinin iki kenar uzunlugunu ve yuksekligini giriniz: ");
					scanf("%f%f%f",&x,&y,&h);
					hacim=x*y*h;
					printf("Dikdortgenler prizmasinin hacmi= %f\n\n",hacim);}
				else{
					printf("\nGecersiz sayi girdiniz!\n\n");}
				break;		
		case 6:
			printf("Ucgen prizmanin alaninin hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
				printf("Sirasiyla ucgen prizmadaki ucgenin taban degerlerini,yuksekligini ve prizmanin yuksekligini giriniz: ");
				scanf("%f%f%f%f%f",&x,&x2,&x3,&h2,&h);
				alan=x*h2+h*(x+x2+x3);
				printf("Ucgen prizmanin alani= %f\n\n",alan);}
				else
					if(a==2){
					printf("Sirasiyla ucgen prizmadaki ucgenin taban degerlerinden birisini,yuksekligini ve prizmanin yuksekligini giriniz: ");
					scanf("%f%f%f",&x,&h2,&h);
					hacim=x*h2*h;
					printf("Ucgen prizmanin hacmi= %f\n\n",hacim);}
				else{
				printf("\nGecersiz deger girdiniz!\n\n");}	
				break;
		case 7:
			printf("Kare prizmanin alanini hesaplamak icin 1'i,hacmini hesaplamak icin 2'yi tuslayin: ");
			scanf("%d",&a);
				if(a==1){
				printf("Sirasiyla kare prizmanin bir kenar uzunlugunu ve yuksekligini giriniz: ");
				scanf("%f%f",&x,&h);
				alan=2*x*x+4*(x*h);
				printf("Kare prizmanin alani= %f\n\n",alan);}
				else
					if(a==2){
					printf("Sirasiyla kare prizmanin bir kenar uzunlugunu ve yuksekligini giriniz: ");
					scanf("%f%f",&x,&h);
					hacim=x*x*h;
					printf("Kare prizmanin hacmi= %f\n\n",hacim);}
				else{
				printf("\nGecersiz deger girdiniz!\n\n");}
				break;	
		default:
			printf("\nGecersiz deger girdiniz!\n\n");		
			break;															
			}
	return main();
}
