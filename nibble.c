struct nybble_array{
	int * items;
	int sizeInInts;
	int sizeInNybbles;
	int nybblesInInt;
};

//create new array of nybbles
struct nybble_array * nybble_array_new(int size){
	//initialise struct
	struct nybble_array * newArray = malloc(sizeof(struct nybble_array));
	//useful sizes
	newArray->sizeInNybbles = size;
	newArray->nybblesInInt = sizeof(unsigned)*2;
	newArray->sizeInInts = size/nybblesInInt;
	//create the new array and zero it out
	newArray->items = malloc(sizeof(unsigned)*(newArray->sizeInInts));
	for(int i = 0; i < newArray->sizeInInts; i++){
		newArray->items[i] = 0;
	}
	return newArray;
}

//return the nybble value at position index
int get_nybble_value(struct nybble_array * this, int index){
	int result = 0;
	//if out of bounds, return -1
	if(index < 0 || index >= this->sizeInNybbles) return -1;

	//bring the wanted nybble to the rightmost 4 bits and isolate it
	int number = this -> items[index/ this->nybblesInInt];
	number = number>>((index % this->nybblesInInt)*4);
	result = number & 15;
	return result;
}


//set the nibble at position index to value
void set_nybble_value(struct nybble_array * this, int index, int value){
	//do nothing if index out of bounds or if value larger than nybble
	if(index >= 0 || index < this->sizeInNybbles || value >= -7 || value <= 15){
		//bring the wanted nybble to the rightmost 4 bits and isolate it
		int number = this -> items[index/ this->nybblesInInt];
		int updatedValue<<((index % this->nybblesInInt)*4);
		number = number | updatedValue;
		this -> items[index/ this->nybblesInInt] = number;
	}
}

//free the memory used by a nibble array
void nybble_array_free(struct nybble_array * this){
	free(this-> items);
	free(this);
}
