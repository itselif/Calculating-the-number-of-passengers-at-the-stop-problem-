#include<stdio.h>
int main()
{
	/* X ve Y noktalar� aras�nda 100 adet metro dura�� bulunmaktad�r. Her durak 1 den 100 e  kadar numaraland�r�lm��t�r. Bir metro X noktas�ndan 1 yolcu 
	alarak kalkmaktad�r.  Her durakta durak numaras� kadar yolcu alarak yoluna devam etmektedir. Son durak Y old. i�in buradan yolcu almamaktad�r.
	Buna g�re X dura��ndan kalkan metronun Y dura��na kadar her durakta ka� yolcusunun oldu�unu ve son dura�a toplam ka� yolcu ile ula�t���n� hesaplayan program.*/
	
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
