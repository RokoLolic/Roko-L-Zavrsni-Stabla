#include "functions.hh"

int writefileintostring(string rijeci, string namecitfile) {
	ifstream citajfile(namecitfile);
	string temp;
	while (getline(citajfile, temp)) {
		rijeci.append(temp);
	}
	citajfile.close();
}
int writestringintofile(string rijeci, string namepisfile)
{
	ifstream citajfile(namepisfile);
	string temp;
	while (getline(citajfile, temp)) {
		rijeci.append(temp);
	}
	citajfile.close();
};