#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t stringLength(const char *string){
	size_t length = 0;
	while(*(string++)){
		length++;
	}

	return length;
}

size_t longInt(int i){
	int tmp = 1;
	while(i / 10){
		i = i / 10;
		tmp++;
	}

	return tmp;
}

char *format(char *buffer, size_t size, const char *name, size_t quantity, size_t weight){
	snprintf(buffer, size, "Item: %s  Quantity: %u  Weight: %u", name, quantity, weight);

	return buffer;
}

char *formata(char *buffer, size_t size, const char *name, size_t quantity, size_t weight){
	char *formatString = "Item: %s  Quantity: %u  Weight: %u";
	//size_t formatStringLength = strlen(*formatString) - 6;
	size_t formatStringLength = strlen( "Item: %s  Quantity: %u  Weight: %u") - 6;
	size_t nameLength = strlen(name);
	size_t quantityN = longInt(quantity);
	size_t weightN = longInt(weight);
	size_t length = formatStringLength + nameLength + quantityN + weightN + 1;
	
	if(buffer == NULL){
		buffer = (char *)malloc(length);
		size = length;
	}

	snprintf(buffer, size, formatString, name, quantity, weight);

	return buffer;
}

typedef struct forM{
	char form1[34];
	char name[10];
	int quantity;
	int weight;
	int size;
} ForM;

int main(int argc, char **argv)
{
	ForM forM1;
	char *form2 = "Item: %s  Quantity: %u  Weight: %u";
	strcpy(forM1.form1, form2);
	strcpy(forM1.name, "Axle");
	forM1.quantity = 205;
	forM1.weight = 40005;
	size_t size1 = stringLength(form2) + strlen(forM1.name) + longInt(forM1.quantity) + longInt(forM1.weight) - 5;
	printf("%s\n", format(forM1.form1, forM1.size, forM1.name, forM1.quantity, forM1.weight));

	ForM forM2;
	strcpy(forM2.name, "Axileguo");
	forM2.quantity = 2500;
	forM2.weight = 450;
	size_t size2 = stringLength(form2) + strlen(forM2.name) + longInt(forM2.quantity) + longInt(forM2.weight) - 5;
	printf("%s\n", format(forM2.form1, forM2.size, forM2.name, forM2.quantity, forM2.weight));

	return 0;
}
