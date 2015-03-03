int main(int argc, char **argv) {
	
	int arr[] = {10, 15, 25};
	int assignedVar = 10;

	int var = arr[0]+arr[1]+arr[2];

	int a = 10;
	int b = 15;

	while ( a != 0 && b > 0) {
		if (a >= b) {
			a /= b;
			b *= a;
		}
		else
		if (b == 0 || a < b) {
			b /= a;
			a = 0;
		}
		a--;
		b++;
	}

	return 0;
}
