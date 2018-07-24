int checkTriangle(int a, int b, int c) {
	int min,mid,max;
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
