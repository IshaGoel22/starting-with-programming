// C++ code to perform transpose on sparse matrices
#include <iostream>
using namespace std;

class sparse_matrix
{

	// Maximum number of elements in matrix
	const int MAX = 100;

	// Double-pointer initialized by
	// the constructor to store
	// the triple-represented form
	int **data;

	// dimensions of matrix
	int row, col;

	// total number of elements in matrix
	int len;

public:
	sparse_matrix(int r, int c)
	{

		// initialize row
		row = r;

		// initialize col
		col = c;

		// initialize length to 0
		len = 0;

		//Array of Pointer to make a matrix
		data = new int *[MAX];

		// Array representation
		// of sparse matrix
		//[,0] represents row
		//[,1] represents col
		//[,2] represents value
		for (int i = 0; i < MAX; i++)
			data[i] = new int[3];
	}

	// insert elements into sparse matrix
	void insert(int r, int c, int val)
	{

		// invalid entry
		if (r > row || c > col)
		{
			cout << "Wrong entry";
		}
		else
		{

			// insert row value
			data[len][0] = r;

			// insert col value
			data[len][1] = c;

			// insert element's value
			data[len][2] = val;

			// increment number of data in matrix
			len++;
		}
	}

	sparse_matrix transpose()
	{

		// new matrix with inversed row X col
		sparse_matrix result(col, row);

		// same number of elements
		result.len = len;

		// to count number of elements in each column
		int *count = new int[col + 1];

		// initialize all to 0
		for (int i = 1; i <= col; i++)
			count[i] = 0;

		for (int i = 0; i < len; i++)
			count[data[i][1]]++;

		int *index = new int[col + 1];

		// to count number of elements having
		// col smaller than particular i

		// as there is no col with value < 0
		index[0] = 0;

		// initialize rest of the indices
		for (int i = 1; i <= col; i++)

			index[i] = index[i - 1] + count[i - 1];

		for (int i = 0; i < len; i++)
		{

			// insert a data at rpos and
			// increment its value
			int rpos = index[data[i][1]]++;

			// transpose row=col
			result.data[rpos][0] = data[i][1];

			// transpose col=row
			result.data[rpos][1] = data[i][0];

			// same value
			result.data[rpos][2] = data[i][2];
		}

		// the above method ensures
		// sorting of transpose matrix
		// according to row-col value
		return result;
	}


	// printing matrix
	void print()
	{
		cout << "\nDimension: " << row << "x" << col;
		cout << "\nSparse Matrix: \nRow\tColumn\tValue\n";

		for (int i = 0; i < len; i++)
		{
			cout << data[i][0] << "\t " << data[i][1]
				<< "\t " << data[i][2] << endl;
		}
	}
};

// Driver Code
int main()
{

	// create two sparse matrices and insert values
	sparse_matrix a(4, 4);
	sparse_matrix b(4, 4);

	a.insert(1, 2, 10);
	a.insert(1, 4, 12);
	a.insert(3, 3, 5);
	a.insert(4, 1, 15);
	a.insert(4, 2, 12);
	b.insert(1, 3, 8);
	b.insert(2, 4, 23);
	b.insert(3, 3, 9);
	b.insert(4, 1, 20);
	b.insert(4, 2, 25);

	cout << "\nTranspose: ";
	sparse_matrix atranspose = a.transpose();
	atranspose.print();
}