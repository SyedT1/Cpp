int removeEvens(Stack<int>&p, int k) {
	if (p.isEmpty()) {
		return 0;
	}
	int num = p.peek();
	bool del;
	if (num % 2 == 0) {
		if (k > 0) {
			del = true;
			k--;
		} else {
			del = false;
		}
	}
	p.pop();
	int vals = removeEvens(p, k);
	if (!del) {
		p.push(num);
		return vals;
	} else {
		return vals+1;
	}
}
