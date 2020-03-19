#include <assert.h>
#include "Seqs.h"
void testseqd() {
	int x[7] = { 1,2,3,4,4,5,6 };
	int start = -1;
	int end = -1;
	seqd(7, x, start, end);
	assert(start == 0);
	assert(end == 3);
	start = -1;
	end = -1;
	int v[4] = { 1,1,1,1 };
	seqd(4, v, start, end);
	assert(end == 0);


}
void testseqsigns() {
	int x[7] = { 1,-1,3,-4,5,8,9 };
	int start = -1;
	int end = -1;
	seqsigns(7, x, start, end);
	assert(start == 0);
	assert(end == 4);
	start = -1;
	end == -1;
	int v[4] = { 1,2,3,4 };
	seqsigns(4, v, start, end);
	assert(end == 0);



}