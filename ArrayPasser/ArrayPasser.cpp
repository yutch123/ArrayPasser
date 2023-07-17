#include <iostream>
using namespace std;
void increase(int* const array, const int NUM_ELEMENTS);
void display(const int* const array, const int NUM_ELEMENTS);

int main()
{
	cout << "Creating an array of high scores.\n\n";
	const int NUM_SCORES = 3;
	int highScores[NUM_SCORES] = {5000, 3500, 2700};
	cout << "Displaying scores using array name as a constant pointer.\n";
	cout << *highScores << endl;
	cout << *(highScores + 1) << endl;
	cout << *(highScores + 2) << "\n\n";
	cout << "Increasing scores by passing array as a constant pointer.\n\n";
	increase(highScores, NUM_SCORES);
	cout << "Display scores by passing array as a constant pointer to a constant.\n";
	display(highScores, NUM_SCORES);
	return 0;
}

// увеличиваю на 500 каждый элемент массива

void increase(int* const array, const int NUM_ELEMENTS)
{
	for (int i = 0; i < NUM_ELEMENTS; i++)
	{
		array[i] += 500;
	}
}

// функция, которая отображет нынешние очки

void display(const int* const array, const int NUM_ELEMENTS)
{
	for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
		cout << array[i] << endl;
	}
}

