 #include <iostream>

using namespace std;

namespace mynamespace {
    void inputMatrix(double** matrix, int rows, int columns) {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < columns; ++j)
                cin >> matrix[i][j];
    }

    void displayMatrix(const double** matrix, int rows, int columns) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j)
                cout << matrix[i][j] << "\t";
            cout << endl;
        }
    }

    int main() {
        int rows, columns;
        const int MAX_COLUMNS = 3; // Define the maximum number of columns
        do {
            cout << "Enter number of rows (<=3): ";
            cin >> rows;
            cout << "Enter number of columns (<= " << MAX_COLUMNS << "): ";
            cin >> columns;

            if (rows > 3 || columns > MAX_COLUMNS)
                cout << "Invalid input! Rows should be <= 3 and columns should be <= " << MAX_COLUMNS << "." << endl;
        } while (rows > 3 || columns > MAX_COLUMNS);

        double** array = new double*[rows];
        for (int i = 0; i < rows; ++i)
            array[i] = new double[columns];

        inputMatrix(array, rows, columns);
        displayMatrix(const_cast<const double**>(array), rows, columns);

        for (int i = 0; i < rows; ++i)
            delete[] array[i];
        delete[] array;

        return 0;
    }
}

int main() {
    return mynamespace::main();
}
