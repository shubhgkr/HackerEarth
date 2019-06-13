//
// Created by shubhgkr on 14/6/19.
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/harry-and-ron-play-a-game-of-chess/
#include <iostream>
#include <cstring>

int board[9][9];

void dfs(int x, int y, int count) {
	if (board[x][y] <= count || x <= 0 || x >= 9 || y <= 0 || y >= 9)
		return;
	board[x][y] = count;
	dfs(x + 2, y - 1, count + 1);
	dfs(x + 2, y + 1, count + 1);
	dfs(x - 2, y + 1, count + 1);
	dfs(x - 2, y - 1, count + 1);
	dfs(x + 1, y - 2, count + 1);
	dfs(x + 1, y + 2, count + 1);
	dfs(x - 1, y + 2, count + 1);
	dfs(x - 1, y - 2, count + 1);
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::memset(board, 64, sizeof(board));
	dfs(x1, y1, 0);
	std::cout << board[x2][y2];
	return 0;
}