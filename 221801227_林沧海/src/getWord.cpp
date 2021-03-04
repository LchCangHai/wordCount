#include "head.h"

//获取一行中的单词及其个数存入map中
void fun::getWord(string str, map<string, int> &mymap) {
    regex words_regex("[a-zA-Z]{4}[a-za-z0-9]*"); // 判断单词的正则表达式

    auto words_begin = sregex_iterator(
        str.begin(),
        str.end(),
        words_regex);
    auto words_end = sregex_iterator();

    for (sregex_iterator k = words_begin; k != words_end; ++k) {
        smatch match = *k;
        string match_str = match.str();//获取单词
        //////////////将单词放进map统计数量/////////////////
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


