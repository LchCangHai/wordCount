#include "head.h"

int main() {
    FILE* point;      //�ļ�ָ��
    char buffer[500]; //�����ļ��е�һ��
    char filename[50];//��ȡ�ļ�·��
    char outFile[50];//д�������ļ�·��
    fun myfun;

    int charCnt = 0,
        wordCnt = 0,
        lineCnt = 0;

    cin >> filename >> outFile;

    if ((point = fopen(filename, "rb")) == NULL) {
        perror(filename);
        return NULL;
    }
    while (fgets(buffer, 500, point) != NULL) {
        string str = buffer;
        ++lineCnt;
        charCnt += strlen(buffer);
        wordCnt += myfun.countWord(str);
    }

    return 0;
}



