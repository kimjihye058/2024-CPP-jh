﻿#include <iostream>

int main(void) 
{
	int arr[4];
	char str[4];

	// 4바이트 차이(x86으로 설정하면 더 좋아요)
	printf("%d %d\n", &arr[0], &arr[1]);
	// 위의 코드와 결과가 같다. (배열의 이름은 주소값)
	printf("%d %d\n", arr, arr+1);
	
	return 0;
}