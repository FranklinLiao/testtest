#include <stdio.h>

int findSubStr(char* string,int stringSize,char* subString,int subStringSize) {
	if(string==NULL || stringSize <1 || subString == NULL || subStringSize<1) {
		return -1;
	}
	int stringIndex = 0;
	int subStringIndex = 0;
	int result = -1;
	int matchCnt = 0;
	while(stringIndex<stringSize && subStringIndex<subStringSize) {
		if(string[stringIndex] == subString[subStringIndex]) {
			result = stringIndex;
			matchCnt++;
			stringIndex++;
			subStringIndex++;
		} else {
			if(result==-1) {
				stringIndex++;
			} else {
				subStringIndex=0;
				matchCnt=0;
				stringIndex = stringIndex - matchCnt +1; //回到匹配到的位置的后一位，然后继续匹配
				matchCnt = 0;
			}
		}
	}
	if(subStringIndex<subStringSize) {
		result = -1;
	}
	return result-subStringSize+1;
}
int main(int argc, char *argv[])
{
	//printf("Hello, world\n");
	char string[10] = {'a','b','c','d','b','c','e','f','g','h'};
	char subString[3] = {'b','c','e'};
	int index = findSubStr(string,10,subString,3);
	printf("index : %d",index);
	getchar();
	return 0;
}
