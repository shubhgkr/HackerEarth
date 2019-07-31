//
// Created by shubhgkr on 21/7/19.
//

#include<iostream>
#include<vector>


bool isValid(std::vector<std::vector<int>> board, int boardSize, int row, int col) {
	//checks row or col
	for (int i = 0; i < boardSize; i++)
		if (board[row][i] || board[i][col])
			return false;

	//checks diagonals
	for (int i = row - 1; i >= 0; --i) {
		for (int j = col - 1; j >= 0; j--)
			if (board[i][j])
				return false;
	}
	for (int i = row - 1; i >= 0; --i) {
		for (int j = col + 1; j < boardSize; j++)
			if (board[i][j])
				return false;
	}
	return true;
}

bool NQueen(std::vector<std::vector<int>> &board, int boardSize, int N) {
	if (N == 0)
		return true;
	for (int i = 0; i < boardSize; i++) {
		for (int j = 0; j < boardSize; j++) {
			if (isValid(board, boardSize, i, j)) {
				board[i][j] = 1;
				if (NQueen(board, boardSize, N - 1))
					return true;
				board[i][j] = 0;
			}
		}
	}
	return false;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int N;
	std::cin >> N;
	std::vector<std::vector<int>> board((N), std::vector<int>((N), 0));
	if (NQueen(board, N, N)) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				std::cout << board[i][j] << " ";
			std::cout << "\n";
		}
	} else
		std::cout << "Not possible\n";
	return 0;
}