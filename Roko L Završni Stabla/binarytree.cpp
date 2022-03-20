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
	binarypointer current = input; //trenutni cvor, ide po stablu i onda ce se na njegovo mjesto staiti input root
	if (keymode == KEYMODE_INTEGER) {
		while (current != nullptr) {
			if (input->keynumb <= current->keynumb) {
				current == current->left;
			}
			else {
				current == current->right;
			}
		}
	}
	else if((keymode == KEYMODE_STRING)) {
		while (current != nullptr) {
			if ((input->keyword).compare(current->keyword)) {
				current == current->left;
			}
			else {
				current == current->right;
			}
		}
	}
};