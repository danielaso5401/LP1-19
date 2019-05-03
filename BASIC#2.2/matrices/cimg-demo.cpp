#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;


int main()
{
	CImg<int> src("lena400.jpg");
	int rows = src.width();
	int columns = src.height();
	cout<< rows<<" "<<columns<<endl;
	int R[rows][columns];

	for (int i=0; i<rows; i++)
		for (int j=0; j< columns; j++)
		{
			R[i][j] = 150;
			// src(j,i,0,0); Para acceder a la data,

		}


	CImg<int> red(R[0], src.width(), src.height(), 1, 1, 1);
	red.save("lena_new.jpg");
	(src, red).display();
	return 0;
}
