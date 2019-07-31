//
// Created by shubhgkr on 21/7/19.
//

#include<iostream>
#include<vector>

bool isAttack(const std::vector<int> &queens, int x) {
	int y = queens.size();
	for (int i = 0; i < y; i++)
		if (std::abs(queens[i] - x) == 0 || std::abs(queens[i] - x) == y - i)
			return true;
	return false;
}

void queenSolution(const int boardSize, std::vector<int> queens, std::vector<std::vector<int>> &result) {
	if (queens.size() >= boardSize) {
		result.push_back(queens);
		queens.clear();
		return;
	}
	for (int i = 0; i < boardSize; i++) {
		if (!isAttack(queens, i)) {
			queens.push_back(i);
			queenSolution(boardSize, queens, result);
			queens.pop_back();
		}
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int boardSize;
	std::cin >> boardSize;
	std::vector<int> queens;
	std::vector<std::vector<int>> result;
	queenSolution(boardSize, queens, result);
	if (result.size() == 0)
		std::cout << "Not possible";
	else {
		std::vector<int> ans = result[0];
		for (int i = 0; i < boardSize; i++) {
			for (int j = 0; j < boardSize; j++) {
				if (ans[i] == j)
					std::cout << "1 ";
				else
					std::cout << "0 ";
			}
			std::cout << "\n";
		}
	}
	return 0;
}