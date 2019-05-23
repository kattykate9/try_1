#include <iostream>
#include <ctime>


using namespace std;

void Dice_1(int i, int j);
void Dice_2(int i, int j);
void Dice_3(int i, int j);
void Dice_4(int i, int j);
void Dice_5(int i, int j);
void Dice_6(int i, int j);
void Game(int n, int m);

int main()
{

	srand(time(0));
	int n = 0, i = 0, m = 0, j = 0; 
	int c_pocket = 0;
	int u_pocket = 0;
	int summ = 0;
	int summ1 = 0;
	int summ2 = 0;
	int summ3 = 0;
	int compNum[6]{};
	int userNum[6]{};

TryAgain:
	cout << "First will be ..." << endl;

	for (int n = 1; n <= 2; n++) 
	{
		compNum[n] = 1 + rand() % 6;
		cout << "Computer's points are: " << compNum[n] << endl;
		int s = compNum[n];
		if (s == 1)
		{
			Dice_1(i, j);
		}
		else if (s == 2)
		{
			Dice_2(i, j);
		}
		else if (s == 3)
		{
			Dice_3(i, j);
		}
		else if (s == 4)
		{
			Dice_4(i, j);
		}
		else if (s == 5)
		{
			Dice_5(i, j);
		}
		else
		{
			Dice_6(i, j);
		}
		summ += compNum[n];
	}
	cout << "The total summ is " << summ << endl;
	cout << endl;

	for (int m = 1; m <= 2; m++)
	{
		userNum[m] = 1 + rand() % 6;
		cout << "User's points are: " << userNum[m] << endl;
		int s1 = userNum[m];
		if (s1 == 1)
		{
			Dice_1(i, j);
		}
		else if (s1 == 2)
		{
			Dice_2(i, j);
		}
		else if (s1 == 3)
		{
			Dice_3(i, j);
		}
		else if (s1 == 4)
		{
			Dice_4(i, j);
		}
		else if (s1 == 5)
		{
			Dice_5(i, j);
		}
		else
		{
			Dice_6(i, j);
		}
		summ1 += userNum[m];
	}
	cout << "The total summ is " << summ1 << endl;
	cout << endl;
	
	if (summ > summ1)
	{
		cout << "Computer will be first" << endl;
	}
	else if (summ < summ1)
	{
		cout << "User will be first" << endl;
	}
	else
	{
		cout << "The points are equal" << endl;
		cout << "Restart" << endl;
		summ = 0;
		summ1 = 0;
		goto TryAgain;
	}
	cout << endl;
	cout << "Let's start to play" << endl;
	cout << endl;

	Game(n, m);

	system("pause");
	return 0;
}
void Dice_1(int i, int j)
{
	char rects[5][5] = { { '-', '-', '-', '-', '-' },
					   { '-', ' ', ' ', ' ', '-' },
					   { '-', ' ', '*', ' ', '-' },
					   { '-', ' ', ' ', ' ', '-' },
					   { '-', '-', '-', '-', '-' } };

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << rects[j][i] << ' ';
		}
		cout << '\n';
	}
	return;
}

void Dice_2(int i, int j)
{
	char rects[5][5] = { { '-', '-', '-', '-', '-' },
					   { '-', ' ', ' ', ' ', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', ' ', ' ', ' ', '-' },
					   { '-', '-', '-', '-', '-' } };
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << rects[j][i] << ' ';
		}
		cout << '\n';
	}
	return;
}

void Dice_3(int i, int j)
{
	char rects[5][5] = { { '-', '-', '-', '-', '-' },
					   { '-', ' ', '*', ' ', '-' },
					   { '-', ' ', '*', ' ', '-' },
					   { '-', ' ', '*', ' ', '-' },
					   { '-', '-', '-', '-', '-' } };
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << rects[j][i] << ' ';
		}
		cout << '\n';
	}
	return;
}

void Dice_4(int i, int j)
{
	char rects[5][5] = { { '-', '-', '-', '-', '-' },
					   { '-', ' ', ' ', '*', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', '*', ' ', ' ', '-' },
					   { '-', '-', '-', '-', '-' } };
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << rects[j][i] << ' ';
		}
		cout << '\n';
	}
	return;
}

void Dice_5(int i, int j)
{
	char rects[5][5] = { { '-', '-', '-', '-', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', ' ', '*', ' ', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', '-', '-', '-', '-' } };
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << rects[j][i] << ' ';
		}
		cout << '\n';
	}
	return;
}

void Dice_6(int i, int j)
{
	char rects[5][5] = { { '-', '-', '-', '-', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', '*', ' ', '*', '-' },
					   { '-', '-', '-', '-', '-' } };
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << rects[j][i] << ' ';
		}
		cout << '\n';
	}
	return;
}


void Game(int n, int m)
{
	int summ2 = 0;
	int summ3 = 0;
	int compNum[6]{};
	int userNum[6]{};
	int c_pocket = 0;
	int u_pocket = 0;
	char y;


	while (c_pocket < 1000 && u_pocket < 1000)
	{

		for (int n = 1; n <= 2; n++) {
			compNum[n] = 1 + rand() % 6;
			cout << "Computer's points are: " << compNum[n] << endl;
			summ2 += compNum[n];
		}
		cout << "The computer's points is " << summ2 << endl;
		cout << endl;


		for (int m = 1; m <= 2; m++) {
			userNum[m] = 1 + rand() % 6;
			cout << "Your points are: " << userNum[m] << endl;
			summ3 += userNum[m];
		}
		cout << "The user's points are: " << summ3 << endl;
		cout << endl;

		

		if (summ2 > summ3)
		{
			c_pocket += 100;
		}
		else if (summ3 > summ2)
		{
			u_pocket += 100;
		}
		else
		{
			c_pocket += 0;
			u_pocket += 0;
			cout << "The points are equal" << endl;
		}

		cout << "The computer's pocket is:" << c_pocket << endl;
		cout << "The user's pocket is:" << u_pocket << "\n" << endl;
		
		
		summ2 = 0;
		summ3 = 0;

		tryAgain1:
		if(u_pocket == 300 || c_pocket == 600)
		{
			
			cout << "Would you like to make a double? If yes, press - 'y', if no, press - 'q'" << endl;
			cin >> y;
			if (y == 'q')
			{
				continue;
			}
			

			 if ((y == 'y')  ||  (summ3 > summ2))
				 
			{
					 u_pocket += 100;
					 c_pocket += 0;
			}

			 else
			 {
				 cout << "Press only 'q' or 'y'" << endl;
				 goto tryAgain1;
			 }
		}
	}

	if (u_pocket > c_pocket)
	{
		cout << "The winner is a USER" << endl;
	}
	else if (c_pocket > u_pocket)
	{
		cout << "The winner is a COMPUTER" << endl;
	}
	else
	{
		cout << "Stand off" << endl;
	}
	return;
}



