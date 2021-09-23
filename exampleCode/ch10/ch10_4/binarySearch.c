#include <stdio.h>
typedef int element;
int cnt=0;	// 이진 검색의 연산 횟수

void binarySearch(element a[], int begin, int end, element key) {
	int middle;
	cnt++;						// 이진 검색 연산 횟수 1 증가
	if (begin == end) {			// 검색 범위가 한 개인 경우
		if (key == a[begin]) printf("%3d번째에 검색 성공!\n", cnt);
		else printf("%3d번째에 검색 실패! \n", cnt);
		return;
	}

	middle = (begin + end) / 2;  // 검색 범위가 이진 분할되는 기준 위치 설정
	if (key == a[middle])  printf("%3d번째에 검색 성공!\n", cnt);
	else if (key < a[middle] && (middle - 1 >= begin))
		binarySearch(a, begin, middle - 1, key);
	else if (key > a[middle] && (middle + 1 <= end))
		binarySearch(a, middle + 1, end, key);
	else printf("%3d번째에 검색 실패! \n", cnt);
}