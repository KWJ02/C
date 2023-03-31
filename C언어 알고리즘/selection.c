#include <stdio.h>

int main(void) { // 본인 답안 -> 실행시간 0.985초

	int n[10];

	printf("숫자 입력 : ");

	for (int i = 0; i < 10; i++) {	
		scanf_s("%d", &n[i]);
	}

	for (int i = 0; i < 10; i++) {

		int b = 1;
		int temp = 0;

		while (i + b < 10) {

			if (n[i] > n[i+b]) {
				temp = n[i];
				n[i] = n[i + b];
				n[i + b] = temp;

				b++;

				continue;
			}
			else {
				b++;
				continue;
			}
		}
		
	}

	printf("선택 정렬 : ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", n[i]);
	}

	return 0;

}



// 이중 반복문 사용할 때, for이중중첩문이 for안에 while문 하나 들어가있는것보다 훨씬 빠름





//int main(void) { // 답안 -> 0.639초 소요
//    int data[10] = { 10, 6, 7, 9, 3, 4, 2, 1, 5, 8 };
//    int temp;
//    //랜덤한 위치라고 생각.
//    printf("정렬 전 순서\n");  //정렬하기 전 상태 출력.
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", data[i]);
//    }
//    printf("\n");
//
//    //아래의 2중 for문이 선택 정렬 핵심.
//    for (int i = 0; i < 9; i++) {  //10-1까지 마지막 대상은 비교할 필요가 없으니.
//        for (int j = i + 1; j < 10; j++) {  //선정 위치 +1부터 마지막까지 비교.
//            if (data[i] > data[j]) {  //오름차순이니 작은지 확인.
//                temp = data[i];//swap.
//                data[i] = data[j];
//                data[j] = temp;
//            }
//        }
//    }
//
//
//
//    printf("정렬 후 순서\n");  //정렬한 후 상태 출력.
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", data[i]);
//    }
//    printf("\n");
//    return 0;
//}