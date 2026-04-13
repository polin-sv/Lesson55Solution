#include "logic.h"



double get_average(int marks[], int size) {
	double avg = 0;
	for (int i = 0; i < size; i++)
	{
		avg += marks[i];
	}

	return avg / size;
}

string get_best_class(int classA[], int classB[], int classC[], int size) {
	string best_class = "class ";

	double avgA = get_average(classA, size);
	double avgB = get_average(classB, size);
	double avgC = get_average(classC, size);

	int count = 3;
	double averages[]{ avgA,avgB,avgC };
	string classes[]{ "A","B","C" };

	int index = 0;
	string cl = classes[0];

	for (int i = 0; i < count; i++)
	{
		if (averages[index] < averages[i]) {
			index = i;
			cl = classes[i];
		}
	}

	return "class" + cl;
}