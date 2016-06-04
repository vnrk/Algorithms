/*

 * 		heap.c
 * 		heap data structure
 * 		Created on: May 28, 2014
 * 		Author: Venkata 
*/

struct heap {
	int *arr;
	int count;
	int capacity;
	int heap_type;//0 min_heap, 1 max_heap
};

struct heap * createHeap(int capacity, int heap_type) {
	struct heap *h = (struct heap*)malloc(sizeof(struct heap));
	//if(h == NULL) {
	//	printf("Memory Error");
	//	return EXIT_FAILURE;
	//}
}

void _heap(){
	createHeap(5,5);
}

