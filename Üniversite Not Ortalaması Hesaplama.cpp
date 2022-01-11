// �niversite not ortalamasini hesaplayan program
// D�nem ortalamasi ve vize-final ortalamas� olmak �zere iki farkl� ortalama tipi vard�r
#include<iostream>
#define x '\n' // x de�i�keni bir alt sat�ra ge�mek i�in atanIR
using namespace std;

int main()
{
	int secenek;
	double kredi,vize,final,ortalama,ortalama2;
	/* ortalama de�i�keni vize-final not ortalamas�,
	ortalama2 de�i�keni d�nem ortalamasindaki vize-final 
	ortalamas� i�indir.*/
	double katsayi; // katsayilar o dersin ortalamas�(vize-final) sonucu elde edilen say�ya kar��l�k gelir
	int derssayisi;	
	double kredikatsayitoplami=0; //Her ders i�in elde edilen kredi ve katsayi �arp�mlar�n�n toplam�n� verir
	double toplamkredi=0; // Girilen derslerin kredi de�erlerinin toplam�
	double donemortalamasi;
	double a; // kredi*katsayi 
	cout<<'\t'<<'\t'<<"1.Donem Not Ortalamasi Hesaplama\n\n\n"
		<<'\t'<<'\t'<<"2.Vize ve Final Ortalamasi Hesaplama\n\n\n"	
		<<'\t'<<'\t'<<"3.NOT Sistemi\n\n\n"
		<<'\t'<<'\t'<<"Seciminiz:";cin>>secenek; // kullan�c�ya hangi i�lemi yapmak istedi�i sorulur
		cout<<x;
		
		switch(secenek)
		{
			case 1:
				cout<<"Kac Dersiniz var?:";cin>>derssayisi; // Kullan�c�ya ka� dersi oldu�u bilgisini girmesi istenir
				for(int i=1;i<=derssayisi;i++)
				{
					cout<<i<<".\nDersin Kredi Degeri:";cin>>kredi; // Dersin kredi de�erinin girilmesi istenir
					toplamkredi+=kredi; // her kredi de�eri girildi�inde toplan�r ve toplamkredi de�i�kenine atan�r
					cout<<"Vize:";cin>>vize;
					cout<<"Final:";cin>>final; // vize ve final notlar�n�n girilmesi istenir
					ortalama2=((vize*40)+(final*60))/100; // vize-final not ortalamas� ortalama2 de�i�kenine atan�r
					if(ortalama2>=90) katsayi=4;
					else if(ortalama2>=80) katsayi=3.5;
					else if(ortalama2>=70) katsayi=3;
					else if(ortalama2>=65) katsayi=2.5;
					else if(ortalama2>=60) katsayi=2;
					else if(ortalama2>=55) katsayi=1.5;
					else if(ortalama2>=50) katsayi=1;
					else if(ortalama2>=40) katsayi=0.5;
					else  katsayi=0; // ortalama2 de�i�keninin de�erine g�re katsay� belirlenir
					a=kredi*katsayi; // kredi*katsayi de�eri a de�i�kenine atan�r
					kredikatsayitoplami+=a; /* Belirlenen katsay� ve o dersin kredisi �arp�l�r ve 
					her ders i�in bu iki de�erin �arp�mlar�n�n toplam� kredikatsayitoplam� de�i�kenine atan�r */

				}
			    cout<<"Donem Ortalamasi:"<<kredikatsayitoplami/toplamkredi; break; // D�nem ortalamas� hesaplan�r
			case 2:
				cout<<"Vize Notunuz:";cin>>vize;
				cout<<"Final Notunuz:";cin>>final; // vize ve final notlar� girilir
				ortalama=((vize*40)+(final*60))/100; // vize-final ortalamas� ortalama de�i�kenine atan�r
				cout<<"Ortalamaniz:"<<ortalama; // ortalama de�eri g�r�n�r
				break;
			case 3:
				// �niversite harfli not sistemi hakk�nda bilgii verilir
				cout<<"BASARI NOTU\t"<<"KAT SAYI\t"<<"HARF NOTU\n\n"
				    <<"90-100\t\t"<<"4\t\t"<<"AA\n"
				    <<"80-89\t\t"<<"3.5\t\t"<<"BA\n"
				    <<"70-79\t\t"<<"3\t\t"<<"BB\n"
				    <<"65-69\t\t"<<"2.5\t\t"<<"CB\n"
				    <<"60-64\t\t"<<"2\t\t"<<"CC\n"
				    <<"55-59\t\t"<<"1.5\t\t"<<"DC\n"
				    <<"50-54\t\t"<<"1\t\t"<<"DD\n"
				    <<"40-49\t\t"<<"0.5\t\t"<<"FD\n"
				    <<"0-39\t\t"<<"0\t\t"<<"FF\n";
                    break;
        }
}
