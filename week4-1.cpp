
#include <string.h>

/*
int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };
	int* p;

	p = a;

	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
	printf("a[0] = %d a[1] = %d a[2] = %d\n", p[0], p[1], p[2]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;


	printf("a[0] = %d a[1] = %d a[2] = %d\n", a[0], a[1], a[2]);
	printf("a[0] = %d a[1] = %d a[2] = %d\n", p[0], p[1], p[2]);
	return 0;
}
*/
//참조에 의한 호출로 자리 바꾸기
/*
void swap(int* a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

int main(void) {
	int val1 = 10;
	int val2 = 20;
	printf("1 %d 2 %d\n", val1, val2);
	swap(&val1, &val2);
	printf("1 %d 2 %d\n", val1, val2);
}
*/

//두 개의 리턴값 받기
/*
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yin) {

	if (x1 == x2)
		return -1;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yin = y1 - (*slope) * x1;
		return 0;
	}
}

int main(void) {
	float s, y;
	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
		printf("에러\n");
	else
		printf(" 기울기는 %f, y절편은 %f\n", s, y);
	return 0;
}
*/
/*
int main(void) {
	int arr[3] = { 11,22,33 };
	int* ptr = arr;

	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr++;
	printf("%d", *ptr); ptr -- ;
	printf("%d", *ptr); ptr--;
	printf("%d", *ptr); printf("\n");
	return 0;
}*/

//TwoStringType.c
#include <stdio.h>

/*
int main(void) {
	char str1[] = "My string";
    char* str2 = "Your string";
	printf("%s %s \n", str1, str2);

	str2 = "Our string"; // 가리키는 대상 변경
	printf("%s %s\n", str1, str2);

	str1[0] = 'X';
	//str2[0] = 'X';  // str2는 상수형이기 때문에 바꿀 수 없다.
	printf("%s %s\n", str1, str2);
	return 0;
}
*/
/*
int main(void) {
	const char* strArr[3] = { "Simple", "String", "Array" };

	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);

	printf("%s\n", strArr[2]);

}*/

void ShuwArrayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++);
	printf("%d  ", param[i]);
	printf("\n");

}

void AddArayElem(int* param, int len, int add) {
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

int main(void) {
	int arr[3] = { 1,2,3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShuwArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShuwArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShuwArrayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}