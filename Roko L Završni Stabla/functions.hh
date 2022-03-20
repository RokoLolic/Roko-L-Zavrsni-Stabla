#pragma once
#ifndef HEADER
#define HEADER
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
int KEYMODE_INTEGER = 1;
int KEYMODE_STRING = 2;
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
	binarynode(string, int);
	int binaryadd(binarypointer, binarypointer, int);
};

int writefileintostring(string rijeci, string namecitfile);
int writestringintofile(string rijeci, string namepisfile);

#endif