#include "Matrix.h"

double Matrix::getEl(int i, int j) {
	return this->matrix[i][j];
}

int Matrix::getSizeI() {
	return this->matrix.size();
}
int Matrix::getSizeJ() {
	return this->matrix[0].size();
}


Matrix Matrix::multiplication(Matrix mat1, Matrix mat2)
{
	if (mat1.getSizeJ() == mat2.getSizeI()) {
		//Не оптимально т.к. создается много лишних объектов; todo переписать с указателями 
		vector<vector<double>> resMat;
		for (int i = 0; i < mat1.getSizeI(); i++) {
			vector<double> resRow;
			for (int j = 0; j < mat2.getSizeJ(); j++) {
				double resEl = 0;
				for (int mi = 0; mi < mat2.getSizeI(); mi++) {
					resEl += mat1.getEl(i, mi)*mat2.getEl(mi, j);
				}
				resRow.push_back(resEl);
			}
			resMat.push_back(resRow);
		}
		return Matrix(resMat);
	}
}

void Matrix::print() {
	cout << "Matrix -- " << "row: " << getSizeI() << ", col: " << getSizeJ() << endl;
	for (int i = 0; i < getSizeI(); i++) {
		for (int j = 0; j < getSizeJ(); j++) {
			cout << getEl(i, j) << " ";
		}
		cout << endl;
	}
}
