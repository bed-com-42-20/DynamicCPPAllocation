#include <iostream>

using namespace std;

namespace mynamespace {
void inputMatrix(double** matrix, int rows, int cols) {
for (int i = 0; i < rows; ++i)
for (int j = 0; j < cols; ++j)
cin >> matrix[i][j];
    }
void displayMatrix(const double** matrix, int rows, int cols) {
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j)
cout << matrix[i][j] << "\t";
cout << endl;
        }
    }
int main() {
int rows, cols;
do {
cout << "Enter number of rows (<=3): ";
cin >> rows;
cout << "Enter number of columns (<=3): ";
cin >> cols;

if (rows > 3 || cols > 3)
cout << "Invalid input! Both rows and columns should be <= 3." << endl;
} 
while (rows > 3 || cols > 3);
double** array = new double*[rows];
for (int i = 0; i < rows; ++i)
array[i] = new double[cols];
inputMatrix(array, rows, cols);
displayMatrix(const_cast<const double**>(array), rows, cols);
for (int i = 0; i < rows; ++i)
delete[] array[i];
delete[] array;

return 0;
    }
}
int main() {
return mynamespace::main();
}
