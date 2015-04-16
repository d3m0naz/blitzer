/*
Tool zur Festlegung von Geldbußen bei Geschwindigkeitsübertretungen
Unterrichtseinheit vom 16. April 2015
*/
#include <iostream>
#include <string>

using namespace std;

int main ()
{
	
	int vmax, vmess, vdiff, i, maxmess;
	char weiter;

	cout << "BLITZER Version 0.1\n\n";
	//cout << "Messung (1) innerorts oder (2) ausserorts? ";
	cout << "Erlaubte Maximalgeschwindigkeit: "; cin >> vmax;
	//cout << "Anzahl der Messungen: "; cin >> maxmess;

	//for(i=1; i<maxmess+1; i++)
	do
	{
		cout << "Gemessene Geschwindigkeit: "; cin >> vmess;

		vdiff = vmess - vmax;

		cout << "Das Fahrzeug war " << vdiff << "km/h zu schnell.\n\n";

		if(vdiff >2 && vdiff <11)
			{
			cout << "Das Bussgeld betraegt 15 Euro.\n\n";
			}
		if(vdiff >10 && vdiff <16)
			{
			cout << "Das Bussgeld betraegt 25 Euro.\n\n";
			}
		if(vdiff >=16 && vdiff <21)
			{
			cout << "Das Bussgeld betraegt 35 Euro.\n\n";
			}
		if(vdiff >=21 && vdiff <26)
			{
			cout << "Das Bussgeld betraegt 80 Euro und 1 Punkt.\n\n";
			}
		if(vdiff >=26 && vdiff <31)
			{
			cout << "Das Bussgeld betraegt 100 Euro und 1 Punkt.\n\n";
			}
		if(vdiff >=31 && vdiff <41)
			{
			cout << "Das Bussgeld betraegt 160 Euro und 2 Punkte und 1 Monat Fahrverbot.\n\n";
			}
		if(vdiff >=41 && vdiff <51)
			{
			cout << "Das Bussgeld betraegt 200 Euro und 2 Punkte und 2 Monate Fahrverbot.\n\n";
			}
		if(vdiff >=51 && vdiff <61)
			{
			cout << "Das Bussgeld betraegt 280 Euro und 2 Punkte und 2 Monate Fahrverbot.\n\n";
			}
		if(vdiff >=61 && vdiff <71)
			{
			cout << "Das Bussgeld betraegt 480 Euro und 2 Punkte und 3 Monate Fahrverbot.\n\n";
			}
		if(vdiff >70)
			{
			cout << "Das Bussgeld betraegt 680 Euro und 2 Punkte und 3 Monate Fahrverbot.\n\n";
			} 
		if(vdiff <= vdiff)
		{
			cout << "Keine Uebertretung!!!\n\n";
		}
	cout << "Noch ein Foto? "; cin >> weiter;
	}
	while(weiter == 'j');

system("pause");
}
