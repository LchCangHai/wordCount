#include "head.h"

typedef pair<string, int> PAIR;

// ��map��valueֵ��������
struct CmpByValue {
	bool operator()(const PAIR& lhs, const PAIR& rhs) {
		return rhs.second < lhs.second;
	}
};