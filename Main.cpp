#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char option = 'y';

	board.printBoard();

	while (option != 'n')
	{
		cout << endl << "Gunakan angka";
		cout << endl << "Koordinat berapa: ";
		cout << endl << "X : "; cin >> x;
		cout << "Y : "; cin >> y;
		board.use(x, y);
		cout << endl;
		board.printBoard();
		cout << endl;
		cout << "lagi ?"; cin >> option;
	}
}