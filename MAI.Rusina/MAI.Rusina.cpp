
//Русина Лада - МАИ
#include <iostream>

typedef float FUN(float);

float Function(float x)
{
	return 7.0*x + 2.0*pow(x, 2) - 1.0*pow(x, 3) + 3.0*pow(x, 4) - pow(x, 5) + 102.0;
}




struct Extremum
{
private:
	float minimun, maximum, y;
	int N;
public:
	void SetN(float N)
	{
		this->N = N;
	}


	void Solve(FUN polynom) {
		for (int i = 1; i <= N; i++)
		{
			y = polynom(i);

			if (i == 1)
			{
				minimun = polynom(i);
				maximum = 0;
			}
			if (y < minimun) 
			{
				minimun = y;
			}
			if (y > maximum)
			{
				maximum = y;
			}

		}
	}
	

};


int main()
{
	Extremum polynomial;
	
	polynomial.SetN(2021);
	polynomial.Solve(Function);

	


	



}

