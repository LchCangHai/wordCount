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
	int countWord(string str); //����һ�У�һ���ַ����У��ĵ�����
	void getWord(string str, map<string, int>& mymap);
	map<string, int> getWordTest(string str);
};