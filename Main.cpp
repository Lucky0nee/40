#include <iostream>
using namespace std;
int main() {
	int i, j;
	int m1, wm;
	system("chcp 1251>nul");
	cout << "Введiть розмiр трикутника: ";
	cin >> m1; m1++; wm = m1;

	int** pXArr = new int* [m1];
	for (i = 0; i < m1; i++, wm--)
		pXArr[i] = new int[m1];

	// Заповнення масива нулями до головної діагоналі
	for (i = m1 - 1; i >= 0; i--, wm++) {
		for (j = 0; j < wm; j++) {
			pXArr[i][j] = 0;
			cout << pXArr[i][j] << "\t";
		}
		cout << "\n\n";
	}
	/* Послідовне вилучення */
	for (i = 0; i < m1; i++)
		delete[]pXArr[i];
	delete[]pXArr;
}

/*
На основі коду зробити трикутник іншого розміру.
*/
