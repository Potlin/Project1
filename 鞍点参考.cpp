#include "stdlib.h"
#include "time.h"
#include <iomanip>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a[5][4];
	int i, j, k, m, n;
	int flag = 1;
	// ��������������鸳ֵ
	srand(time(NULL));
	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = rand() % 5;
	//�������
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	//Ѱ�Ұ���
	for (i = 0; i < 5; i++)
	{
		for (m = 0, j = 1; j < 4; j++)
			if (a[i][m] < a[i][j]) m = j; //�ҳ�ÿ�������
		for (k = 0; k < 4; k++)
			if (a[i][k] == a[i][m]) //�����ڸ���������ߣ����������е�Ԫ�رȽϣ�
			{
				for (n = i, j = 0; j < 5; j++)
					if (a[n][k] > a[j][k]) { n = j; break; } //�����Ԫ����������С������Ԫ�أ������Ƚ�
					//�����Ԫ����������Ԫ�ض�������������������С�����������,�����flag,��ʾ�а���
				if (n == i) { flag = 0; cout << i + 1 << "��" << k + 1 << "��" << "������Ԫ��:" << a[i][k] << endl; }
			}
	}
	if (flag) cout << "\nû�а��㡣" << endl;
	return 0;
}