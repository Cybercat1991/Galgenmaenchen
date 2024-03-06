#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]) {
	int life = 10;
	string wort;
	string wort2;
	string wort3;
	char letter;
	cout << "Gebe bitte ein Wort ein: ";
	cin >> wort;
	wort3 = wort;
	system("cls");

	for (int i = 0; i < wort.size(); i++) {
		wort2 += '_';
	}
	cout << "Folgendes Wort wird Gesucht: " << wort2 << " Du hast 10 Leben." << endl;
	while ((wort2.find('_') != string::npos) && (life > 0)) {
		cin >> letter;
		if (wort.find(letter) == string::npos) {
			life--;
		}
		while (wort.find(letter) != string::npos) {
			wort2[wort.find(letter)] = letter;
			wort[wort.find(letter)] = '_';
		}
		if (life > 0) {
			cout << "Folgendes Wort wird Gesucht: " << wort2 << " Du hast " << life << " Leben." << endl;
		}
	}
	if (life == 0) {
		cout << "Game Over! Folgendes Wort wurde gesucht: " << wort3 << endl;
	}
	else {
		cout << "Glückwunsch du hast das Wort " << wort2 << " erraten, somit Gewonnen!" << endl;
	}
	system("pause");
	return 0;
}