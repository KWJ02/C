#include <stdio.h>

int main(void) { // ���� ��� -> ����ð� 0.985��

	int n[10];

	printf("���� �Է� : ");

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

	printf("���� ���� : ");

	for (int i = 0; i < 10; i++) {
		printf("%d ", n[i]);
	}

	return 0;

}



// ���� �ݺ��� ����� ��, for������ø���� for�ȿ� while�� �ϳ� ���ִ°ͺ��� �ξ� ����





//int main(void) { // ��� -> 0.639�� �ҿ�
//    int data[10] = { 10, 6, 7, 9, 3, 4, 2, 1, 5, 8 };
//    int temp;
//    //������ ��ġ��� ����.
//    printf("���� �� ����\n");  //�����ϱ� �� ���� ���.
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", data[i]);
//    }
//    printf("\n");
//
//    //�Ʒ��� 2�� for���� ���� ���� �ٽ�.
//    for (int i = 0; i < 9; i++) {  //10-1���� ������ ����� ���� �ʿ䰡 ������.
//        for (int j = i + 1; j < 10; j++) {  //���� ��ġ +1���� ���������� ��.
//            if (data[i] > data[j]) {  //���������̴� ������ Ȯ��.
//                temp = data[i];//swap.
//                data[i] = data[j];
//                data[j] = temp;
//            }
//        }
//    }
//
//
//
//    printf("���� �� ����\n");  //������ �� ���� ���.
//    for (int i = 0; i < 10; i++) {
//        printf("%d ", data[i]);
//    }
//    printf("\n");
//    return 0;
//}