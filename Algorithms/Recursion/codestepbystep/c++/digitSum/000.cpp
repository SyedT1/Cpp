int digitSum(int x){
	return x==0?x:(x%10)+digitSum(x/10);
}
