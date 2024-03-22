#include <iostream>
#include <cmath>
using namespace std;

int tghesapla(int& vize) //tam geçiþ hesapla
{
	int tgfinal, vizedenGelen, ek;

	vizedenGelen = vize * 4 / 10;
	tgfinal = (50 - vizedenGelen) * 10 / 6;

	if (tgfinal < 50)
	{
		ek = 50 - tgfinal;
		return tgfinal += ek;
	}

	return tgfinal;
}
int sghesapla(int& vize) //sorumlu geçiþ hesapla
{
	int sgfinal, vizedenGelen, ek;

	vizedenGelen = vize * 4 / 10;
	sgfinal = (45 - vizedenGelen) * 10 / 6;

	if (sgfinal < 50)
	{
		ek = 50 - sgfinal;
		return sgfinal + ek;
	}

	return sgfinal;
}

void harfnotu(int& ilk, int& son)
{
	int ortalama = round((ilk * 0.4) + (son * 0.6));
	if (ortalama <= 44)
		cout << "ortalamaniz: " << ortalama << " Kalirsiniz" << endl;
	else if (ortalama >= 45 && ortalama <= 54)
		cout << "ortalamaniz: " << ortalama << " DD Harf Notu" << endl;
	else if (ortalama >= 55 && ortalama <= 59)
		cout << "ortalamaniz: " << ortalama << " DC Harf Notu" << endl;
	else if (ortalama >= 60 && ortalama <= 69)
		cout << "ortalamaniz: " << ortalama << " CC Harf Notu" << endl;
	else if (ortalama >= 70 && ortalama <= 79)
		cout << "ortalamaniz: " << ortalama << " CB Harf Notu" << endl;
	else if (ortalama >= 80 && ortalama <= 84)
		cout << "ortalamaniz: " << ortalama << " BB Harf Notu" << endl;
	else if (ortalama >= 85 && ortalama <= 89)
		cout << "ortalamaniz: " << ortalama << " BA Harf Notu" << endl;
	else if (ortalama >= 90 && ortalama <= 100)
		cout << "ortalamaniz: " << ortalama << " AA Harf Notu" << endl;
}

int main()
{

	int vize, cikis;
	cout << "Finalden kac almaliyim?" << endl << endl;
	cout << "Sistemden cikmak icin '-1'i devam etmek icin '1'i tiklayiniz. Tercihiniz: ";
	cin >> cikis;
	while (cikis != -1)
	{
		cout << "Lutfen vize notunuzu giriniz: ";
		cin >> vize;

		cout << endl << "En azindan sorumlu gecis yapabilmek icin en az almaniz gereken final notu: " << sghesapla(vize) << endl;
		int sgfinal = sghesapla(vize);
		cout << "Finalden " << sgfinal << " alip sorumlu gecerseniz ";
		harfnotu(vize, sgfinal);

		cout << endl << "Dersten sorumlu olmadan gecebilmek icin en az almaniz gereken puan: " << tghesapla(vize) << endl;
		int tgfinal = tghesapla(vize);
		cout << "Finalden " << tgfinal << " alip sorumlu olmadan gecerseniz ";
		harfnotu(vize, tgfinal);

		cout << endl << "Sistemden cikmak icin '-1'i devam etmek icin herhangi bir tusa tiklayiniz." << endl;
		cin >> cikis;
	}

}
