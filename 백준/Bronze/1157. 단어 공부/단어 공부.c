#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0, max = 0, cnt2 = 0, ires = 0;
	char str[1000001];
	scanf("%s", str);
	getchar();
	
	int cnt[26] = { 0 };

	while (str[i] != '\0') {

		
		for (int j = 65; j <= 90; j++) {
			if ((int)str[i] - j == 0) cnt[j-65]++;
		}

		for (int j = 97; j <= 122; j++) {
			if ((int)str[i] - j == 0) cnt[j - 97]++;
		}

		i++;
	}

	
	max = cnt[0];
	for (int i = 0; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			ires = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == cnt[i]) cnt2++;
	}

	if (cnt2 >= 2) printf("?");
	else printf("%c", ires + 65);



	return 0;
}