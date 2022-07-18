//Beni Yaratan Elbet Yolumu Gösterir .Şuara78
//Bu proje öğrencilerin final ve vize notlarını hesaplayarak (%40 and %60) ,not  ortalamasını ve harf notunu bulmak için yazılmıştır.
//This project written for calculat  final and midterm (%40 and %60) score of students , calculate average and find letter grade .

#include <iostream>
using namespace std;

int main()
{
	int vize;
	int final;
	double ortalama;
	
	cout << "Lutfen vize notunuzu giriniz :";
	cin >> vize;

	if (vize > 100 || vize < 0 )
	{
		cout << "UYARI !!! Lutfen vize notunuzu 100'den kucuk veya 0'dan buyuk giriniz ";
	}

	cout << endl;

    while (vize > 100 || vize < 0)
	{
		cout << "Lutfen vize notunuzu 100'den kucuk veya O'dan buyuk giriniz :";
		cin >> vize;
	}

	cout << "Lutfen final notunuzu giriniz :";
	cin >> final;

	if (final > 100 || final < 0)
	{
		cout << "UYARI !!! Lutfen final notunuzu 100'den kuçuk ve 0'dan buyuk giriniz ";
	}
	cout << endl;

	while (final > 100 || final < 0)
	{
		cout << "Lutfen final notunuzu 100'den kucuk veya O'dan buyuk giriniz :";
		cin >> final;
	}

	cout << endl;

	ortalama = (vize * 0.4) + (final * 0.6);
    
	cout << "Ortlamaniz :" << ortalama;
	cout << endl;
	cout << "Harf notunuz :";

	if (ortalama >= 90 && ortalama < 100)
	{
		cout << "Harf notunuz :" << "AA";
	}

	else if (ortalama >= 80 && ortalama < 90)
	{
		cout << "Harf notunuz :" << "BB";
	}

	else if (ortalama >= 70 && ortalama < 80)
	{
		cout << "Harf notunuz :" << "CC";
	}

	else 
	{
		cout << "Harf notunuz :" << "DD";
	}

	system("PAUSE");
	return 0;

	}


