#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int scale(char* scalable_image, int image_size, char limit, bool** binary_image) {
	bool* binary_image_temp = (bool*) malloc(image_size * sizeof(bool));
	
	if (binary_image == NULL) {
		perror("LOW MEMORY");
		return 1;
	}
	
	for (int i = 0; i < image_size; ++i) {
		if (scalable_image[i] > limit) {
			binary_image_temp[i] = true;
		} else {
			binary_image_temp[i] = false;
		}		
	}
	
	*binary_image = binary_image_temp;
	
	return 0;
}
