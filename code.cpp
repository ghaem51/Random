int main()
{
	srand(time(NULL));
	int z,n=16;
	char matrix[4][4];
	char alfa[16] = { 'A','B' ,'C' ,'D' ,'E' ,'F' ,'G' ,'H' ,'I' ,'J' ,'K' ,'L' ,'M' ,'N' ,'O' ,'P' };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			z = rand() % n;
			matrix[i][j]= alfa[z];
			for (int q = z; q < n-1; q++)
			{
				alfa[q] = alfa[q + 1];
			}
			n--;
			cout << matrix[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	_getch();
    return 0;
}
