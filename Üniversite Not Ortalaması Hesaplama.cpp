// Üniversite not ortalamasini hesaplayan program
// Dönem ortalamasi ve vize-final ortalamasý olmak üzere iki farklý ortalama tipi vardýr
#include<iostream>
#define x '\n' // x deðiþkeni bir alt satýra geçmek için atanIR
using namespace std;

int main()
{
	int secenek;
	double kredi,vize,final,ortalama,ortalama2;
	/* ortalama deðiþkeni vize-final not ortalamasý,
	ortalama2 deðiþkeni dönem ortalamasindaki vize-final 
	ortalamasý içindir.*/
	double katsayi; // katsayilar o dersin ortalamasý(vize-final) sonucu elde edilen sayýya karþýlýk gelir
	int derssayisi;	
	double kredikatsayitoplami=0; //Her ders için elde edilen kredi ve katsayi çarpýmlarýnýn toplamýný verir
	double toplamkredi=0; // Girilen derslerin kredi deðerlerinin toplamý
	double donemortalamasi;
	double a; // kredi*katsayi 
	cout<<'\t'<<'\t'<<"1.Donem Not Ortalamasi Hesaplama\n\n\n"
		<<'\t'<<'\t'<<"2.Vize ve Final Ortalamasi Hesaplama\n\n\n"	
		<<'\t'<<'\t'<<"3.NOT Sistemi\n\n\n"
		<<'\t'<<'\t'<<"Seciminiz:";cin>>secenek; // kullanýcýya hangi iþlemi yapmak istediði sorulur
		cout<<x;
		
		switch(secenek)
		{
			case 1:
				cout<<"Kac Dersiniz var?:";cin>>derssayisi; // Kullanýcýya kaç dersi olduðu bilgisini girmesi istenir
				for(int i=1;i<=derssayisi;i++)
				{
					cout<<i<<".\nDersin Kredi Degeri:";cin>>kredi; // Dersin kredi deðerinin girilmesi istenir
					toplamkredi+=kredi; // her kredi deðeri girildiðinde toplanýr ve toplamkredi deðiþkenine atanýr
					cout<<"Vize:";cin>>vize;
					cout<<"Final:";cin>>final; // vize ve final notlarýnýn girilmesi istenir
					ortalama2=((vize*40)+(final*60))/100; // vize-final not ortalamasý ortalama2 deðiþkenine atanýr
					if(ortalama2>=90) katsayi=4;
					else if(ortalama2>=80) katsayi=3.5;
					else if(ortalama2>=70) katsayi=3;
					else if(ortalama2>=65) katsayi=2.5;
					else if(ortalama2>=60) katsayi=2;
					else if(ortalama2>=55) katsayi=1.5;
					else if(ortalama2>=50) katsayi=1;
					else if(ortalama2>=40) katsayi=0.5;
					else  katsayi=0; // ortalama2 deðiþkeninin deðerine göre katsayý belirlenir
					a=kredi*katsayi; // kredi*katsayi deðeri a deðiþkenine atanýr
					kredikatsayitoplami+=a; /* Belirlenen katsayý ve o dersin kredisi çarpýlýr ve 
					her ders için bu iki deðerin çarpýmlarýnýn toplamý kredikatsayitoplamý deðiþkenine atanýr */

				}
			    cout<<"Donem Ortalamasi:"<<kredikatsayitoplami/toplamkredi; break; // Dönem ortalamasý hesaplanýr
			case 2:
				cout<<"Vize Notunuz:";cin>>vize;
				cout<<"Final Notunuz:";cin>>final; // vize ve final notlarý girilir
				ortalama=((vize*40)+(final*60))/100; // vize-final ortalamasý ortalama deðiþkenine atanýr
				cout<<"Ortalamaniz:"<<ortalama; // ortalama deðeri görünür
				break;
			case 3:
				// Üniversite harfli not sistemi hakkýnda bilgii verilir
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
