#include <stdio.h>
int main(void)
{
	int arr[4][4];
	int i, k, start = 1;

	for (i = 0; i < 4; i++) {
		for (k = 0; k < 4; k++) {
			arr[i][k] = start;
			start++;
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");

	for (k = 0; k < 4; k++){
		for (i = 3; i >= 0; i--){
			printf("%4d", arr[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}


//#include <stdio.h>
//// a를 90도 시계방향으로 회전하여 b에 넣는다
//void rotate2dimArray(int a[][5], int b[][5], int size)
//{
//    int i, k;
//    
//    //돌린 결과
//    for (i = 0; i < size; i++) {
//		for (k = 0; k < size; k++) { //원래
//			b[i][k] = a[size-k][i];
//		}
//	}
//  
//    return;
//}
//
//int main(void)
//{
//	int A[5][5];
//	int B[5][5];
//	int n, key;
//	int i, j;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//			scanf("%d", &A[i][j]);
//
//	rotate2dimArray(A, B, 5);
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d ", B[i][j]);
//		}
//		printf("\n");
//	}
//}