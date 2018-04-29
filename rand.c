unsigned long int rand_next = 1;

int rand (){
	rand_next = rand_next * 1103515245 + 54321;
	return ((unsigned int)(rand_next / 65536) % 32768);
}

void srand(unsigned int seed){
	rand_next = seed;
}
