#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <map>
#include <regex>
using namespace std;

class fun {
public:
	map<string, int> mymap;
	int countWord(string str); //����һ�У�һ���ַ����У��ĵ�����
	void getWord(string str);
	map<string, int> getWordTest(string str);
	void showWord();
};