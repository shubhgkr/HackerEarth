//
// Created by shubhgkr on 19/7/19.
// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	int dayCount[31] = {0};
	std::string msg;
	while (n--) {
		std::getline(std::cin, msg);
		std::string date;
		int counter = 1;
		if (msg[0] == 'G')
			counter = 2;
		for (char ch:msg) {
			if (!date.empty() && std::isdigit(ch) == 0) {
				dayCount[std::stoi(date)] += counter;
				date = "";
			} else if (std::isdigit(ch))
				date += ch;
		}
		if (!date.empty())
			dayCount[std::stoi(date)] += counter;
	}
	int mx = *std::max_element(dayCount, dayCount + 31);
	int date = 0;
	bool flag = false;
	for (int i = 1; i < 31; i++) {
		if (dayCount[i] == mx)
			if (date != 0) {
				flag = true;
				break;
			} else
				date = i;
	}
	if (flag || (date != 19 && date != 20))
		std::cout << "No Date";
	else
		std::cout << "Date";
	return 0;
}