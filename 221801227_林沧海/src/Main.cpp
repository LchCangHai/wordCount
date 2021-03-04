#include "head.h"
typedef pair<string, int> PAIR;

// ��map��valueֵ��������
struct CmpByValue {
    bool operator()(const PAIR& lhs, const PAIR& rhs) {
        return rhs.second < lhs.second;
    }
};

int main() {
    char buffer[500]; //�����ļ��е�һ��
    fun myfun;

    int charCnt = 0,
        wordCnt = 0,
        lineCnt = 0;

    while (cin >> buffer) {
        string str = buffer;
        ++lineCnt;
        charCnt += strlen(buffer);
        wordCnt += myfun.countWord(str);
        myfun.getWord(str);
    }
    //myfun.showWord(); //������е��ʼ�����ִ���

    // ǰ3��
    cout << "����Ϊ��" << lineCnt << endl;
    cout << "�ַ���Ϊ��" << charCnt << endl;
    cout << "������Ϊ��" << wordCnt << endl;

    vector<PAIR> mymapvec(myfun.mymap.begin(), myfun.mymap.end());
    sort(mymapvec.begin(), mymapvec.end(), CmpByValue());
    int length1 = mymapvec.size();
    // ��10��
    if (length1 <= 10) {
        for (int i = 0; i != mymapvec.size(); ++i) {
            cout << mymapvec[i].first << endl;
        }
    }
    else {
        for (int i = 0; i < 10; ++i) {
            cout << mymapvec[i].first << endl;
        }
    }
    return 0;
}



