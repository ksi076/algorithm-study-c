#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	
	int n, m, cnt = 0;
	scanf("%d", &n);


	int pc[101] = { 0 };

	for (int i = 1; i <= n; i++) {
		scanf("%d", &m);
		if (pc[m] == 0) pc[m]++;
		else cnt++;
		
	}
	printf("%d", cnt);
	
	return 0;
	
	

}