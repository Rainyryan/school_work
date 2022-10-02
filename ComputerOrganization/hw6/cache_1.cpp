#define NUM_CACHES 40
#include <iostream>
#include <math.h>
#include <fstream>
#include <stdio.h>
#include block.h


int main(){}


	// for loop counter
	int i;

	// the input file
	ifstream infile(argv[1]);
	
	// data from input file, read one at a time
	int read;

	// caches
	block caches[NUM_CACHES];	
	
	// initialize the caches to have varying sizes and replacement policies
	for(i=0;i<NUM_CACHES;++i)
		caches[i].init(64*(int)pow(2,i%5),(i>19));

	// while there is data to be read
	while(infile >> read)
	{
		// put the data in each cache, and set the way assiciativity different
		// for each
		for(i=0;i<NUM_CACHES;++i)
			caches[i].access(read,(int)pow(2,(i/5))%16+(int)pow(2,(i/5))/16);
	}
	
	// print title nicely
	printf(%25snn%14d%10d%10d%10d%11dn,LRU,1024,2048,4096,8192,16384);
	
	// print a the first half of the table, one line at a time
	for(i=0;i<4;++i)
	{
		printf(%-10d%-10.2f%-10.2f%-10.2f%-10.2f%-10.2fn,(int)pow(2,i),caches[5*i].rate(),caches[5*i+1].rate(),
		caches[5*i+2].rate(),caches[5*i+3].rate(),caches[5*i+4].rate());
	}

	// FIFO title
	printf(n%26snn%14d%10d%10d%10d%11dn,FIFO,1024,2048,4096,8192,16384);
	
	// print second half, one line at a time
	for(i=4;i<8;++i)
	{
		printf(%-10d%-10.2f%-10.2f%-10.2f%-10.2f%-10.2fn,(int)pow(2,i%4),caches[5*i].rate(),caches[5*i+1].rate(),
		caches[5*i+2].rate(),caches[5*i+3].rate(),caches[5*i+4].rate());
	}

	// close input file
	infile.close();

	return 0;
}
