#include <fstream>
#include <iostream>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukkan Nama File: ";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis File, \'q\' untuk keluar" << endl;


}