#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main1() {
	struct candidatos {
		string nome;
		float notaMat;
		float notaPt;
		float notaCh;
	} matheus,taina, suzany;

	string myanw;

	cout << "Dentre esses alunos:\n 1.Matheus \n 2.Taina \n 3.Suzany \n você deseja obter o registro do 1,2 ou 3?"; //<<  matheus << "\n 2." << taina <<"\n 3." << suzany << "\n você deseja obter o registro do 1,2 ou 3?";
	getline(cin, myanw);
	//if (myanw == "matheus" || myanw == "Matheus")

	return 0;
}