#include "head.h"

// ����һ�У�һ���ַ����У��ĵ�����
int fun::countWord(string str) {
	regex words_regex("[a-zA-Z]{4}[a-za-z0-9]*"); // �жϵ��ʵ�������ʽ

    auto words_begin = sregex_iterator(
        str.begin(),
        str.end(),
        words_regex);
    auto words_end = sregex_iterator();

    return distance(words_begin, words_end);
}


