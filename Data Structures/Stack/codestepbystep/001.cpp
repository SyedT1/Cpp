void collapse(stack<int>&lo) {
	static bool odd = false;
	if (lo.empty()) {
		return;
	}
	int num1 = lo.top();
	lo.pop();
	if (lo.empty()) {
		cout << num1 << '\n';
		odd = true;
		lo.push(num1);
		return;
	}
	int num2 = lo.top();
	lo.pop();
	collapse(lo);
	if (odd) {
		lo.top() = lo.top() + num2;
		lo.push(num1);
	} else {
		lo.push(num2);
		lo.top() = lo.top() + num1;
	}
}
