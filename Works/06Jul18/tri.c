#include<stdio.h>
#include"tri.h"

int temp1 = 10;

int checkTriangle(int a, int b, int c) {
	int min,mid,max;
	printf("temp1 in function: %d\n", temp1);
	temp1 = 20;
	printf("temp1 in function: %d\n", temp1);
        if((a >= b) && (a >= c)){
		max = a;
        	if(b > c) {
        		mid = b;
        		min = c;
        	}else {
        		mid = c;
        		min = b;
        	}
        }else if((b >= a) && (b >= c)) {
		max = b;
        	if(a > c) {
        		mid = a;
        		min = c;
        	}else {
        		mid = c;
        		min = a;
        	}
        }else if((c >= b) && (c >= a)){
		max = c;
        	if(a > b) {
        		mid = a;
        		min = b;
        	}else {
        		mid = b;
        		min = a;
        	}
        }
        if(mid + min > max) {
        	return(1);
        }else {
                return(0);
        }
}
