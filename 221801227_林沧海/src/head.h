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
    string regexp = "[\s][a-zA-Z]{4}[a-za-z0-9]*[\s]";

    //����һ�У�һ���ַ����У��ĵ�����
    int countWord(string str) {
        regex words_regex(regexp); // �жϵ��ʵ�������ʽ

        auto words_begin = sregex_iterator(
            str.begin(),
            str.end(),
            words_regex);
        auto words_end = sregex_iterator();

        return distance(words_begin, words_end);
    }
    //��ȡһ���еĵ��ʼ����������map��
    void getWord(string str) {
        regex words_regex(regexp); // �жϵ��ʵ�������ʽ

        auto words_begin = sregex_iterator(
            str.begin(),
            str.end(),
            words_regex);
        auto words_end = sregex_iterator();

        for (sregex_iterator k = words_begin; k != words_end; ++k) {
            smatch match = *k;
            string match_str = match.str();//��ȡ����
            //////////////�����ʷŽ�mapͳ������/////////////////
            map<string, int>::iterator iter1;
            iter1 = mymap.find(match_str);
            if (iter1 == mymap.end()) {
                pair<string, int> value(match_str, 1);
                mymap.insert(value);
            }
            else {
                mymap[match_str]++;
            }
        }

    }

    //�����ú���
    map<string, int> getWordTest(string str) {
        regex words_regex(regexp); // �жϵ��ʵ�������ʽ
        map<string, int> mymap;
        auto words_begin = sregex_iterator(
            str.begin(),
            str.end(),
            words_regex);
        auto words_end = sregex_iterator();

        for (sregex_iterator k = words_begin; k != words_end; ++k) {
            smatch match = *k;
            string match_str = match.str();//��ȡ����
            //////////////�����ʷŽ�mapͳ������/////////////////
            map<string, int>::iterator iter1;
            iter1 = mymap.find(match_str);
            if (iter1 == mymap.end()) {
                pair<string, int> value(match_str, 1);
                mymap.insert(value);
            }
            else {
                mymap[match_str]++;
            }
        }
        return mymap;
    }


    //������ʼ�������
    void showWord() {
        map<string, int>::iterator strmap_iter2 = mymap.begin();
        for (;strmap_iter2 != mymap.end();strmap_iter2++)
        {
            cout << strmap_iter2->first << ' ' << strmap_iter2->second << endl;
        }
    }

    int add(int a, int b) {
        return a + b;
    }
};