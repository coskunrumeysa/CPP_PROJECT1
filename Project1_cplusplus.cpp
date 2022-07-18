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
		cout << "\n Dersten : \Gectiniz";
	}

	else if (ortalama >= 85 && ortalama < 89)
	{
		cout << "Harf notunuz :" << "BA";
		cout << "\n Dersten : \Gectiniz";
	}

	else if (ortalama >= 80 && ortalama < 84)
	{
		cout << "Harf notunuz :" << "BB";
		cout << "\n Dersten : \Gectiniz";
	}

	else if (ortalama >= 75 && ortalama < 79)
	{
		cout << "Harf notunuz :" << "CB";
		cout << "\n Dersten : \Gectiniz";
	}

	else if (ortalama >= 70 && ortalama < 74)
	{
		cout << "Harf notunuz :" << "CC";
		cout << "\n Dersten : \Gectiniz";
	}

	else if (ortalama >= 65 && ortalama < 69)
	{
		cout << "Harf notunuz :" << "DC";
		cout << "\n Dersten : \Gectiniz";
	}
	else if (ortalama >= 60 && ortalama < 64)
	{
		cout << "Harf notunuz :" << "BB";
		cout << "\n Dersten : \Gectiniz";
	}
	else if (ortalama >= 50 && ortalama < 59)
	{
		cout << "Harf notunuz :" << "FD";
		cout << "\n Dersten : \Gectiniz";
	}
	else if (ortalama >= 0 && ortalama < 49)
	{
		cout << "Harf notunuz :" << "FF";
		cout << "\nDersten : \tKaldiniz";
	}
	
	cout << endl;

	

	system("PAUSE");
	return 0;

	}


