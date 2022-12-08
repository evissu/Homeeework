#pragma once
#include<iostream>
#include <Windows.h>
using namespace std;
class String
{
	char* strings;
	int len;
public:
	String() {
		int len = 81;
		strings = new char[len];
		strcpy(strings, strings);
	}
	String(int len) {
		strings = new char[len + 1];
		strcpy(strings, strings);
	}
	String(const char* string)
	{
		strings = new char[strlen(strings) + 1];
		strcpy(strings, string);
	}
	~String()
	{
		delete[]strings;
	}
	void setStr() {
		cin >> strings;
	}
	void Llen() {
		cin >> len;
	}

};

