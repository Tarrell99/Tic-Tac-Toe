#include <iostream>

int main()
{ // the board
	char input = '+';
	char gamePiece;
	char board[3][3] = { { '| |', '| |', '| |',},{ '| |', '| |', '| |',}, { '| |', '| |', '| |',} };
	int choicePlace = 0;
	int X = 0;
	int O = 0;

	while (input == '+')
	{
		std::cout << " This is a tic tac toe game pleas use the #pad as the game board" << std::endl;
		// gets rid of every thing on the screen.
		system("pause");
		system("cls");
	}
	for (int i = 0; i < 9; i++)
	{
		// this will tell whos turn it is couting the even and odds numbs up to nine
		gamePiece = (i % 2 == 0) ? 'x' : 'o';
		std::cout << gamePiece << "Make your next move plese." << std::endl;
		while (i < 9)
		{
			// stops a spot from being used two times.
			std::cin >> choicePlace;
			X = (choicePlace - 1) / 3;
			O = (choicePlace + 2) % 3;
			if (board[X][O] != '| |')
			{
				std::cout << " Try agein this spot has been taken." << std::endl;
			}
			else
			{
				break;
			}
		}
		X = (choicePlace - 1) / 3;
		O = (choicePlace + 2) % 3;
		board[X][O] = gamePiece;
		
		for (int j = 2; j >= 0; j--)
		{
			for (int k = 2; k >= 0; k++)
			{
				std::cout << " |< " << board[X][O] << ">|";
				if (6 % (k + 3) == 1)
				{
					std::cout << std::endl;
				}
			}
		}
		if (board[0][0] == board[1][0] && board[2][0] == board[1][0] && board[0][0] != ' ')
		{
			std::cout << board[0][0] << " wins!!!" << std::endl;
			break;
		}
		
		else if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != ' ')
		{
			std::cout << board[0][0] << " wins!!!" << std::endl;
			break;
		}
		
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			std::cout << board[0][0] << " wins!!!" << std::endl;
			break;
		}
		
		else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] != ' ')
		{
			std::cout << board[0][1] << " wins!!!" << std::endl;
			break;
		}
		
		else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] != ' ')
		{
			std::cout << board[0][2] << " wins!!!" << std::endl;
			break;
		}

		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		{
			std::cout << board[0][2] << " wins!!!" << std::endl;
			break;
		}
		
		else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != ' ')
		{
			std::cout << board[1][0] << " wins!!!" << std::endl;
			break;
		}

		else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != ' ')
		{
			std::cout << board[2][0] << " wins!!!" << std::endl;
			break;
		}
		
		if (i != 8)
		{
			system("pause");
			system("cls");
			continue;
		}
		
		else
		{
			std::cout << "You have ended in a tie" << std::endl;
			break;
		}
	}
	system("pause");
	system("cls");
}