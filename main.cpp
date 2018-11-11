#include "Matrix.h"

#include<iostream>
using namespace std;

int main() {
	Matrix m1 = Matrix(vector<double>{1,2,3,1,2,3,1,2,3}, 3, 3);
	Matrix m2 = Matrix(vector<double>{1, 2, 3, 1, 2, 3, 1, 2, 3}, 3, 3);

	Matrix::multiplication(m1, m2).print();
}
