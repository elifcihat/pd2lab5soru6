


#include <stdio.h>
#include <string.h>

/*- - ��aret�ileri kullanarak bir dizideki t�m elemanlar�n toplam�n� hesaplayan C dilinde bir program yaz�n.
Test verisi :
Dizide saklanacak ��e say�s�n� girin (en fazla 10): 5
Dizideki 5 eleman say�s�n� girin:
eleman - 1 : 2
eleman - 2 : 3
eleman - 3 : 4
eleman - 4 : 5
eleman - 5 : 6
Beklenen ��kt� :
Dizinin toplam�: 20
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
