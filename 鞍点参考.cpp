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
	// 用随机函数给数组赋值
	srand(time(NULL));
	for (i = 0; i < 5; i++)
		for (j = 0; j < 4; j++)
			a[i][j] = rand() % 5;
	//输出数组
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	//寻找鞍点
	for (i = 0; i < 5; i++)
	{
		for (m = 0, j = 1; j < 4; j++)
			if (a[i][m] < a[i][j]) m = j; //找出每行最大数
		for (k = 0; k < 4; k++)
			if (a[i][k] == a[i][m]) //凡等于该行最大数者，都与所在列的元素比较，
			{
				for (n = i, j = 0; j < 5; j++)
					if (a[n][k] > a[j][k]) { n = j; break; } //如果该元素所在列有小于它的元素，结束比较
					//如果该元素所在列有元素都不大于它，则它是最小数，将其输出,并标记flag,以示有鞍点
				if (n == i) { flag = 0; cout << i + 1 << "行" << k + 1 << "列" << "，鞍点元素:" << a[i][k] << endl; }
			}
	}
	if (flag) cout << "\n没有鞍点。" << endl;
	return 0;
}