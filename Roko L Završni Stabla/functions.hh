#pragma once
#ifndef HEADER
#define HEADER
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <string.h>

int KEYMODE_INTEGER = 1; //vrsta kljucne rijeæi 1= integer
int KEYMODE_STRING = 2; //2= string
using namespace std;

typedef class binarynode ;
typedef class binarynode * binarypointer;

class node {
public:
	void * data;
	int sizeofdata;

	void* returndata();
	int returndatasize();
};
class binarynode : public node {
public:
	
	binarypointer left;
	binarypointer right;
	string keyword;
	int keynumb;
	binarynode(string, int, void*, int); //stvara novi cvor
	int binaryadd(binarypointer, binarypointer, int); //stavlja jedan u drugi cvor, int je mod
};

int writefileintostring(string rijeci, string namecitfile);
int writestringintofile(string rijeci, string namepisfile);

#endif