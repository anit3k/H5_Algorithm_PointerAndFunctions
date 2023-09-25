#include <stdio.h>

// Function to calculate the sum of elements in an array
int array_sum(int* arr, int n) { // takes in the pointer and the length of the array
	int sum = 0;

	// Loop through each element of the array
	for (int i = 0; i < n; i++) {
		sum += arr[i]; // Add the current element to the sum
	}

	return sum; // Return the total sum
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 }; // Declare and initialize an integer array
	int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
	int sum = array_sum(arr, n); // Calculate the sum of array elements using the array_sum function

	// Print the result
	printf("Sum of array elements: %d\n", sum);

	return 0;
}
