// Problem
https://leetcode.com/problems/plus-one/

// Code
vector<int> plusOne(vector<int> &num) {
	int carry = 1;
	for (int i = num.size() - 1; i >= 0; i--) {
	  if (num[i] < 9) {
		num[i]++;
		carry = 0;
		break;
	  } else {
		num[i] = 0;
	  }
	}

	if (carry) {
	  num.push_back(0);
	  num[0] = 1;
	  return num;
	}

	int countZeros = 0;
	for (int i = 0; i < num.size() && !num[i]; i++) {
	  countZeros++;
	}

	if (countZeros) {
	  int l = 0, r = countZeros;
	  while (r < num.size()) {
		swap(num[l], num[r]);
		l++, r++;
	  }

	  num.resize(num.size() - countZeros);
	}

	return num;
}
