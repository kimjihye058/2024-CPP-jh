﻿#include <iostream>

int main(void) 
{
	int arr[4] = { 10, 20, 30, 40 };
	char str[4];

	int* pi = arr;
	char* pc = str; 

	// 두 코드의 결과는 같다.
	printf("%d %d\n", (&arr[0]), (&arr[1]));	// 4차이
	printf("%d %d\n\n", (arr), (arr + 1));		

	printf("%d %d\n", (pi), (pi + 1));			// 4차이
	printf("%d %d\n", (pc), (pc + 1));			// 1차이
	
	return 0;
}