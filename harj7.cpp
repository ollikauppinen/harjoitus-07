/**********************************************************
*Teht�v�: Harjoitus7
*Tekij�: Olli Kauppinen
*PVM: 24.9.2013
*Kuvaus:
*Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
*Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
*ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
*painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:
*
*Ihannepaino
*
*Ohjelma laskee ihannepainosi
*pituutesi perusteella.
*
*Anna nimesi > Mooses
*Anna pituutesi senttein� > 175
*Anna osoitteesi > Peikkovuori 5 as 4
*Anna painosi kiloina > 89
*
*
*Arvoisa Mooses
*Osoitteesi on Peikkovuori 5 as 4
*Nykyinen painosi 89.0 kg
*Ihannepainosi 75.0 kg
*Erotus 14.0 kg
*
* Versio 1.0 H4718 24.9.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	char nimi[30];
	char osoite[30];
	int pituus;
	int paino;
	int ihannepaino;
	int erotus;

	cout << "\nIhannepaino\n";
	cout << "\nOhjelma laskee ihannepainosi\n";
	cout << "pituutesi perusteella.\n";
	cout << "\nAnna nimesi: \n";
	cin.get(nimi, 30);
	cout << "\nAnna osoitteesi: \n";
	cin.get();
	cin.get(osoite, 30);
	cout << "\nAnna pituutesi senttein�: \n";
	cin >> pituus;
	cout << "\nAnna painosi kiloina: \n";
	cin >> paino;

	cout << "\nArvoisa " << nimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nNykyinen painosi on: " << paino << "kg\n";
	ihannepaino = pituus - 100;
	cout << "Ihannepainosi on " << ihannepaino << "kg\n";
	
	if (paino>ihannepaino)
	{
		erotus = paino-ihannepaino;
	}
	else
	{
		erotus = ihannepaino-paino;
	}
	cout << "Erotus " << erotus <<"kg\n";
}