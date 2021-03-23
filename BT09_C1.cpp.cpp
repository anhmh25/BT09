#include<iostream>
using namespace std;

int length(const char* a) {
	int count = 0;
	while (*(a + count)) {
		count++;
	}
	return count;
}

char* reverse(const char* a) {
	int n = length(a);
	char* p = new char[n];
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		p[i] = a[n-i-1];
	}
	p[n] = '\0';
	return p;
}

char* delete_char(const char* a, char c) {
	int n = length(a);
	char* p = new char[n];
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != c) {
			p[count] = a[i];
			count++;
		}
	}
	for (int i = n; i >= count; i--)p[n] = NULL;
	return p;
}

char* pad_right(const char* a, int n) {
	int k = length(a);
	char* p = new char[k];
	for (int i = 0; i < n; i++) {
		p[i] = a[i];
	}
	while (k < n) {
		p[k] = ' ';
		k++;
	}
	p[n] = NULL;
	return p;
}

char*  pad_left(const char* a, int n) {
	int k = length(a);
	char* p = new char[k];
	for (int i = 0; i < n; i++) {
		p[i] = a[i];
	}
	while (k < n) {
		k++;
		for (int i = k - 1; i >= 0; i--) {
			*(p + i) = *(p + i - 1);
		}
		*p = ' ';
	}
	p[n] = NULL;
	return p;
}

char*  truncate(const char* a, int n) {
	int k = length(a);
	char* p = new char[n];
	for (int i = 0; i < n; i++)p[i] = a[i];
	p[n] = NULL;
	return p;
}

bool is_palindrome(char* a) {
	int k = length(a);
	for (int i = 0; i < k / 2; i++) {
		if (a[i] != a[k - i - 1]) return false;
	}
	return true;
}

char*  trim_left(const char* a) {
	int k = length(a);
	char* p = new char[k];
	int count = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] != ' ') {
			for (int j = i; j < k; j++) {
				p[count] = a[j]; 
				count++;
			}
			break;
		}
	}
	p[count] = NULL;
	return p;
}

int main(int argc, char* argv[]) {
	const char* a = "     Hello world";
	cout << trim_left(a);
	return 0;
}