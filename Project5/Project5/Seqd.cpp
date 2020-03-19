void seqd(int n, int* v, int& start, int& end) {
	int lmax = 0;
	int lastcrt = -1;
	int lcrt = 0;
	int lastmax = -1;
	for (int i = 0; i < n; i++) {
		if (v[i] != v[i + 1]) {
			lcrt++;
			lastcrt = i;
		}
		else {
			if (lcrt > lmax) {
				lmax = lcrt;
				lastmax = lastcrt;
				lcrt = 0;
			}
		}
	}
	
	start = lastmax - lmax + 1;
	end = lastmax+1;
}
void seqsigns(int n, int* v, int& start, int& end) {
	int lmax = 0;
	int lastcrt = -1;
	int lcrt = 0;
	int lastdif = -1;
	for (int i = 0; i < n; i++) {
		if (v[i] > 0 && v[i+1] < 0 || v[i] < 0 && v[i+1] > 0 ) {
			lcrt++;
			lastcrt = i;
		}
		else {
			if (lcrt > lmax) {
				lmax = lcrt;
				lastdif = lastcrt;
				lcrt = 0;
			}
		}
	}
		start = lastdif - lmax + 1;
		end = lastdif+1;
	
}