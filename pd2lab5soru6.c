


#include <stdio.h>
#include <string.h>

/*- - Ýþaretçileri kullanarak bir dizideki tüm elemanlarýn toplamýný hesaplayan C dilinde bir program yazýn.
Test verisi :
Dizide saklanacak öðe sayýsýný girin (en fazla 10): 5
Dizideki 5 eleman sayýsýný girin:
eleman - 1 : 2
eleman - 2 : 3
eleman - 3 : 4
eleman - 4 : 5
eleman - 5 : 6
Beklenen çýktý :
Dizinin toplamý: 20
*/
int main(){
    
    
    int dizi[10],elemansayisi,toplam=0;
    int i;
    int *ptr;
    
    printf("Dizide saklanacak oge sayisini girin (en fazla 10):  ");
    scanf("%d",&elemansayisi);
  
	
    for(ptr=dizi,i=0;ptr<dizi+elemansayisi,i<elemansayisi;ptr++,i++)
    {
    	printf("eleman - %d : ",i+1);
    	scanf("%d",ptr);
    	toplam=toplam+*ptr;
	}
	printf("%d",toplam);
	
 
 return 0;
}
