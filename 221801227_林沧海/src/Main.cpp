#include "head.h"
typedef pair<string, int> PAIR;

// ��map��valueֵ��������
struct CmpByValue {
    bool operator()(const PAIR& lhs, const PAIR& rhs) {
        return rhs.second < lhs.second;
    }
};

int main() {
    FILE* point;      //�ļ�ָ��
    char buffer[500]; //�����ļ��е�һ��
    char filename[100];//��ȡ�ļ�·��
    char outFile[100];//д�������ļ�·��
    fun myfun;

    int charCnt = 0,
        wordCnt = 0,
        lineCnt = 0;
    cout << "����������ļ�������ļ���·����\n";
    cin >> filename;
    //cin.clear();
    cin >> outFile;

    if ((point = fopen(filename, "rb")) == NULL) {
        perror(filename);
        return NULL;
    }
    while (fgets(buffer, 500, point) != NULL) {
        string str = buffer;
        ++lineCnt;
        charCnt += strlen(buffer);
        wordCnt += myfun.countWord(str);
        myfun.getWord(str);
    }
    //myfun.showWord(); //������е��ʼ�����ִ���
    fclose(point);

    ofstream outfile(outFile);
    string temp1 = "����Ϊ��" + to_string(lineCnt) + "\n";
    string temp2 = "�ַ���Ϊ��" + to_string(charCnt) + "\n";
    string temp3 = "������Ϊ��" + to_string(wordCnt) + "\n";
    cout << "����Ϊ��" << lineCnt << endl;
    cout << "�ַ���Ϊ��" << charCnt << endl;
    cout << "������Ϊ��" << wordCnt << endl;
    // ǰ3��
    outfile << temp1 << temp2 << temp3;
    vector<PAIR> mymapvec(myfun.mymap.begin(), myfun.mymap.end());
    sort(mymapvec.begin(), mymapvec.end(), CmpByValue());
    int length1 = mymapvec.size();
    // ��10��
    if (length1 <= 10) {
        for (int i = 0; i != mymapvec.size(); ++i) {
            outfile << mymapvec[i].first << endl;
            cout << mymapvec[i].first << endl;
        }
    }
    else {
        for (int i = 0; i < 10; ++i) {
            outfile << mymapvec[i].first << endl;
            cout << mymapvec[i].first << endl;
        }
    }
    outfile.close();
    return 0;
}



