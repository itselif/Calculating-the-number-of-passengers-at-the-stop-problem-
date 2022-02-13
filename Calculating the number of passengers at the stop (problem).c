#include<stdio.h>
int main()
{
	/* X ve Y noktalarý arasýnda 100 adet metro duraðý bulunmaktadýr. Her durak 1 den 100 e  kadar numaralandýrýlmýþtýr. Bir metro X noktasýndan 1 yolcu 
	alarak kalkmaktadýr.  Her durakta durak numarasý kadar yolcu alarak yoluna devam etmektedir. Son durak Y old. için buradan yolcu almamaktadýr.
	Buna göre X duraðýndan kalkan metronun Y duraðýna kadar her durakta kaç yolcusunun olduðunu ve son duraða toplam kaç yolcu ile ulaþtýðýný hesaplayan program.*/
	
	int station=1,passenger=0,total=0;


/*	while (station<=100)
	{
		passenger=passenger+station;
		printf("Number of passengers at the %dst stop= %d\n ", station ,passenger);
		station++;
			total=total+passenger;
	}
	printf("total= %d", total);

*/

	for(station=1; station<=100;station++)
	{
		passenger=passenger+station;
			printf("Number of passengers at the %dst stop= %d\n ", station ,passenger);
		total=total+passenger;
		
	}
	printf("total= %d", total);



return 0;
	
}
