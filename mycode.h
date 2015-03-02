#define size 10
class matrix
{
	int row;
	int col;
	int values[size][size];
public:
	matrix multiply(matrix m1);
	matrix add(matrix m2);
	matrix subtract(matrix m3);

	void display();
	void read(int r, int c);
	void setOrder (int r, int c);
};

void matrix :: setOrder (int r, int c) {
	row = r;
	col = c;
}

void matrix :: display()
{
	for(int i=0; i<row; i++)
	{
		for (int j=0; j< col; j++)
			cout<<values[i][j]<<" ";
		cout<<endl;
	}
}
void matrix :: read(int r, int c)
{
	row=r;
	col=c;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++)
		{
			cout<<"A["<<i<<"]["<<j<<"] : ";
			cin>>values[i][j];
		}
	}
}

matrix matrix :: multiply(matrix m1)
{
	matrix result;

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<m1.col;j++)
		{
			result.values[i][j]=0;
			for(int k=0;k<col;k++)
			{
				result.values[i][j]=result.values[i][j]+(values[i][k] * m1.values[k][j]);

			}
		}
	}
	return result;
}

matrix matrix :: add(matrix m2)
{
	matrix result;
	result.setOrder  (2,2);

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			result.values[i][j]=values[i][j] + m2.values[i][j];

		}
	}
	return result;
}

matrix matrix :: subtract(matrix m3)
{
	matrix result;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			result.values[i][j]=values[i][j] - m3.values[i][j];

		}
	}
	return result;
}