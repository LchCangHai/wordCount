#include "head.h"


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
    string temp2 = "characters: " + to_string(charCnt) + "\n";
    string temp3 = "words: " + to_string(wordCnt) + "\n";
    string temp1 = "lines: " + to_string(lineCnt) + "\n";

    cout << "characters: " << charCnt << endl;
    cout << "words: " << wordCnt << endl;
    cout << "lines: " << lineCnt << endl;

    // ǰ3��
    outfile << temp1 << temp2 << temp3;
    vector<PAIR> mymapvec(myfun.mymap.begin(), myfun.mymap.end());
    sort(mymapvec.begin(), mymapvec.end(), CmpByValue());
    int length1 = mymapvec.size();
    // ��10��
    if (length1 <= 10) {
        for (int i = 0; i != mymapvec.size(); ++i) {
            outfile << mymapvec[i].first << ": " << mymapvec[i].second << endl;
            cout << mymapvec[i].first << ": " << mymapvec[i].second << endl;
        }
    }
    else {
        for (int i = 0; i < 10; ++i) {
            outfile << mymapvec[i].first << ": " << mymapvec[i].second << endl;
            cout << mymapvec[i].first << ": " << mymapvec[i].second << endl;
        }
    }
    outfile.close();
    return 0;
}



