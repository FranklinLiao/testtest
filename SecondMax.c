
#include <stdio.h>

int findSecond(int intArr[],int n) {
	if(intArr==NULL || n<2) {
		return 0;
	}
	int max=intArr[0];
	int secondMax = intArr[0];
	for(int index=1;index<n;index++) {
		if(intArr[index]>max) {
			secondMax = max;
			max = intArr[index];
		} else if(intArr[index]>secondMax) {
			secondMax = intArr[index];
		}
	}
	return secondMax;
}
int main(int argc, char *argv[])
{
	//printf("Hello, world\n");
	int a[5] = {1,3,2,5,4};
	int secondMax = findSecond(a,5);
	printf("secondMax : %d",secondMax);
	getchar();
	//nothing to hide
	//printf("this is a add")
	return 0;
}
