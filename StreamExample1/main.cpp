#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

struct Vector2D {
	int x;
	int y;


};

std::ostream &operator << (std::ostream &stream, Vector2D obj) {
	stream << obj.x << " " << obj.y << endl;

	return stream;
}
void main() {
	Vector2D  new_vector;
	new_vector.x = 2;
	new_vector.y = 3;
	cout << new_vector << endl;

	/*fprintf(of, "%d %d", new_vector.x, new_vector.y);

	fclose(of);*/
	std::ofstream ofile("cppstyle.txt");
	ofile << new_vector << std::endl;
	system("pause");	
}