bool checkArmstrong(int n){
	int sum = 0;
	int original = n;
	int lastDig;
	int power = to_string(n).length();

	while (n>0)
	{
		lastDig = n % 10;
		sum = sum + pow(lastDig, power);
		n = n / 10;
	}
	if (sum == original) return true;
	else return false;
}
