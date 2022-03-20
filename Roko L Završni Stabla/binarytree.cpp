#include "functions.hh"

binarynode::binarynode(string inputword = "", int inputint = 0, void * datainsert, int datasizeinsert) {
	keyword = inputword;
	keynumb = inputint;
	left = nullptr;
	right = nullptr;
	data = datainsert;
	sizeofdata = datasizeinsert;
};
int binarynode::binaryadd(binarypointer input, binarypointer root, int keymode = KEYMODE_INTEGER) {
	binarypointer current = root; //trenutni cvor, ide po stablu i onda ce se na njegovo mjesto staiti input root
	if (keymode == KEYMODE_INTEGER) { //kljuè je broj
		while (current != nullptr) {
			if (input->keynumb <= current->keynumb) {
				current == current->left; //ide ljevo
			}
			else {
				current == current->right; //ide desno
			}
		}
	}
	else if((keymode == KEYMODE_STRING)) { //kljuè je rijec
		while (current != nullptr) {
			if ((input->keyword).compare(current->keyword)) {
				current == current->left;
			}
			else {
				current == current->right;
			}
		}
	}
	current = input;
};
int binarynode::binarydelete(binarypointer root) {

}
