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
    cout << "����������ļ�������ļ���·����";
    cin >> filename;
    //cin.clear();
    cin >> outFile;
    cout << filename << endl;
    cout << outFile << endl;

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
    myfun.showWord();



    return 0;
}



