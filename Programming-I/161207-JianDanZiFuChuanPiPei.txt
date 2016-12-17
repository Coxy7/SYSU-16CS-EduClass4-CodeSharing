#include <string.h>
int strMatch(const char *s1, const char *s2){
	int i,j,find=0;
	int len1 = strlen(s1) , len2 = strlen(s2);
	for (i = 0; i + len2 <= len1 && !find; i++){
		find = 1;
		for (j = 0; j < len2; j++)
			if (s1[i+j] != s2[j]){
				find = 0;
				break;
			}
	}
	if (find) return i-1;
	return -1;
}