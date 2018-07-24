#include<stdio.h>
#include<stdlib.h>
#include"string.h"
#include"tri.h"

int toNumb(char num[10]) {
	int j, flag;
	for(j=0; j < strlen(num); j++) {
		if(!isdigit(num[j])) {
			flag = 1;
			break;
		}
	}
	if(!flag) {
		return(atoi(num));
	}else {
		printf("ERROR\n");
		exit(0);
	}
}

void main(int argc, char* argv[]) {
	signed short a, b, c;
	int output;
	if(argc != 4) {
		printf("ERROR\n");
	}else {
		a = toNumb(argv[1]);
		b = toNumb(argv[2]);
		c = toNumb(argv[3]);
		if(a > 0 && b > 0 && c > 0) {
			printf("Temp1 before function call: %d\n", temp1);
			output = checkTriangle(a, b, c);
			checkTriangle1();
			checkTriangle2();
			checkTriangle3();
			printf("Temp1 after function call: %d\n", temp1);
			if(output == 1) {
				printf("YES\n");
			}else {
				printf("NO\n");
			}
		}else {
			printf("ERROR\n");
		}
	}
}

