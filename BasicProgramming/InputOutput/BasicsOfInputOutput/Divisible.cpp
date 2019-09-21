/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 21/09/19.
 * Problem link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisibe-or-2d8e196a/
 */

#include <iostream>
#include <vector>
#include <string>

int sum1 = 0, sum2 = 0;

void getfirst(int num, int index) {
	while (num >= 10) {
		num = num / 10;
	}
	if (index % 2 == 0) {
		sum1 += num;
	} else {
		sum2 += num;
	}
}

void getlast(int num, int index) {
	int last = num % 10;
	if (index % 2 == 0) {
		sum1 += last;
	} else {
		sum2 += last;
	}
}

std::string solve(std::vector<int> A) {

	int n = A.size();

	for (int i = 0; i < n / 2; i++) {
		getfirst(A[i], i);
	}

	for (int i = n / 2; i < n; i++) {
		getlast(A[i], i);
	}

	int sum = sum1 - sum2;

	if (sum % 11 == 0) {
		return "OUI";
	} else {
		return "NON";
	}

}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	std::vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	std::cout << solve(arr);
	return 0;
}
