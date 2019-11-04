/*Hacker and traffic light*/
#include<stdio.h>
int n, k;
int arr[100005];
int temp[100005];//plus
int answer = 0;//ans
int sum = 0;//plus
int a = 0; //head
int b = 0; //tail
int main() {
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		char bulb;
		scanf(" %c", &bulb);
		if (bulb == 'G') arr[i] = 0;
		if (bulb == 'R') arr[i] = 1;
		if (bulb == 'Y') arr[i] = 2;
	}
 
	for (int i = 1; i<=n; i++) {
		arr[i] += sum;
		if ((arr[i] + 1) % 3 == 0) {
			temp[b++] = 1;
			answer+=1;
			sum+=1;
		}
		else if ((arr[i] + 2) % 3 == 0) {
			temp[b++] = 2;
			answer += 2;
			sum += 2;
		}
		else temp[b++] = 0;
		if (i >= k) sum = sum-temp[a++];
	}
	printf("%d\n", answer);
 return 0;
}
