#include "util.h"

int main() {

	int classA[DEFAULT_SIZE];
	int classB[DEFAULT_SIZE];
	int classC[DEFAULT_SIZE];

	int size;
	cout << "input number of people: ";
	cin >> size;

	init_marks(classA, size);
	init_marks(classB, size);
	init_marks(classC, size);

	string best_class = get_best_class(classA, classB, classC, size);

	cout << "class A marks: " << convert(classA, size) << endl;
	cout << "class B marks: " << convert(classB, size) << endl;
	cout << "class C marks: " << convert(classC, size) << endl;


	cout << "the best class is " << best_class;
		
	return 0;
}