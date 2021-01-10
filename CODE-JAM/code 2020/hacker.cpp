#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000
int n_test;
int n;
int a[MAX_N + 9];
int b[MAX_N + 9];
int id[MAX_N + 9];
int has_ans;
char ans[MAX_N + 9];

int func_cmp(const void* x, const void* y) {
	return a[*(int*)x] - a[*(int*)y];
}

int main() {
	scanf("%d", &n_test);
	for(int i_test = 1; i_test <= n_test; i_test++) {
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) {
			scanf("%d%d", &a[i], &b[i]);
		}
		for(int i = 1; i <= n; i++) {
			id[i] = i;
		}
		// qsort(id + 1, n, sizeof(int), func_cmp);
        sort(a+0,a+n);
		int end_c = 0;
		int end_j = 0;
		has_ans = 1;
		for(int i = 1; i <= n; i++) {
			int ii = id[i];
			if(a[ii] >= end_c) {
				ans[ii] = 'C';
				end_c = b[ii];
			}
			else if(a[ii] >= end_j) {
				ans[ii] = 'J';
				end_j = b[ii];
			}
			else {
				has_ans = 0;
				break;
			}
		}
		if(!has_ans) {
			printf("Case #%d: IMPOSSIBLE\n", i_test);
		}
		else {
			ans[n + 1] = 0;
			printf("Case #%d: %s\n", i_test, ans + 1);
		}
	}
	return 0;
}