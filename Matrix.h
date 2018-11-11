#ifndef MATRIX_H
#define MATRIX_H

#include<vector>

#include<iostream>
using namespace std;

class Matrix {
public:
	Matrix(vector<vector<double>> matrix) {
		this->matrix = matrix;
	}

	Matrix(vector<double> matrix, int row, int col) {
		vector<vector<double>> resMat;
		vector<double> resRow;
		for (int i = 0; i < matrix.size(); i++) {
			resRow.push_back(matrix[i]);
			if ((i+1) % row == 0) {
				resMat.push_back(resRow);
				resRow.clear();
			}
		}
		this->matrix = resMat;
	}

	double getEl(int, int);
	int getSizeI();
	int getSizeJ();

	static Matrix multiplication(Matrix, Matrix);
	void print();
private:
	vector<vector<double>> matrix;
};


#endif  