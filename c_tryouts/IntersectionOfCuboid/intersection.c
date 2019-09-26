#include <stdio.h>

typedef struct orthoHex {
	int a,b,c,d,e,f;
}orthoHex;

int volume (orthoHex hex) {
	return (hex.d - hex.a)*(hex.e - hex.b)*(hex.f - hex.c);
}

void copyHex (orthoHex hexS, orthoHex *hexD) {
	hexD->a = hexS.a;
	hexD->b = hexS.b;
	hexD->c = hexS.c;
	hexD->d = hexS.d;
	hexD->e = hexS.e;
	hexD->f = hexS.f;
}

void readOrthoHex (orthoHex *hex) {
	scanf ("%d", &hex->a);
	scanf ("%d", &hex->b);
	scanf ("%d", &hex->c);
	scanf ("%d", &hex->d);
	scanf ("%d", &hex->e);
	scanf ("%d", &hex->f);
}

int findIntersection (orthoHex hexA, orthoHex hexB, orthoHex *hexR) {
	hexR.a = hexB.a 
	return ;
}

void main () {
	int T, N, test_case;

	scanf ("%d", &T);
	for (test_case=1; test_case<=T; test_case++) {
		int type = 0, val = 0;	
		
		scanf ("%d", &N);
		if (N == 1) {
			orthoHex hex;
			readOrthoHex (&hex);
			
			val = volume (hex);
			type = 4;
		}else {
			orthoHex hexA, hexB, hexR;
			readOrthoHex (&hexA);
			
			for (i=1; i<N; i++) {
				readOrthoHex (hexB);
				if (!findIntersection (hexA, hexB, &hexR)) {
					type == 0;
					break;
				}
				copyHex (hexR, &hexA);
			}	
		}
		
		if (type == 1) {
			printf ("#%d POINT 0", test_case);
		}else if (type == 2) {
			printf ("#%d EDGE %d", test_case, val);
		}else if (type == 3) {
			printf ("#%d FACE %d", test_case, val);
		}else if (type == 4) {
			printf ("#%d VOLUME %d", test_case, val);
		}else {
			printf ("#%d NULL 0", test_case);
		}
		
	}
}
