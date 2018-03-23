#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int *a;
	int i, j;
	scanf("%d", &N);
	a = (int *)malloc(sizeof(int)*N);
	for (int k = 0; k < N; k++) {
		scanf("%d", &a[k]);
	}
	i = N;
	while (i--) {
		if(i < 1) {
			printf("%d", --i);
			return 0;
		}
		else if (a[i - 1] < a[i]) break;
		else /* Do nothing */;
	}
	j = N;
	while (j--) {
		if (a[i - 1] < a[j]) {
			swap(a[i - 1], a[j]);
			break;
		}
	}

	j = N - 1;
	while (i <= j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}
	for (int k = 0; k < N; k++) {
		printf("%d ", a[k]);
	}
	return 0;
}
