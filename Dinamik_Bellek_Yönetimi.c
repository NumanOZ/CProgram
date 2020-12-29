#include<stdio.h>
#include <stdlib.h>

//Created by Numan ÖZDEMÝR

int main(){
	
	int boyut,*dizi,i;
	int *son,gcc;
	
	printf("Dizi boyutunu girin: ");
	scanf("%d",&boyut);
	
	dizi=(int*)malloc(boyut*sizeof(int));
	
	if(boyut<=1){
		
		printf("Dizi Eleman Sayisi Yer Degistirme Icin Uygun Degil...");
	}
	
	else{
		
		printf("%d Elamanli Dizi Olusturuldu...\n\n",boyut);
	
		for(i=0;i<boyut;i++){
			
			if(i==boyut-1){
				printf("Dizinin [%d] Indeksini Giriniz: ",i);
				scanf("%d",&dizi[i]);
				son=&dizi[i];	
			}
			
			else{
				printf("Dizinin [%d] Indeksini Giriniz: ",i);
				scanf("%d",&dizi[i]);			
			}
	
		}
		
		printf("\n");
		
		for(i=0;i<boyut;i++){
			printf("%d. indeks = %d\n",i,dizi[i]);
		}
		
		printf("\n");
		
		
		gcc=*dizi;
		
		*dizi=*son;
		
		*son=gcc;
		
		printf("--------------------Dizinin Ilk Elemani Ile Son Elemani Yer Degisitirdi--------------------\n\n");
		
		for(i=0;i<boyut;i++){
			printf("%d. indeks = %d\n",i,dizi[i]);
		}
		
		/*printf("Pointer: %p\n",dizi);
		printf("Pointer: %p\n",son);
		printf("Pointer: %d\n",*son);
		printf("Pointer: %d\n",*dizi);*/	
	}
	
	return 0;
}
