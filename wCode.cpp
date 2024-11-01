#include <iostream>
#include <vector>

//define verts here
std::vector<int> vert = {
	0, 0, //vert 1 coords
	3, 0, //vert 2 coords
	0, 3, //vert 3 coords
	3, 0 //vert 4 coords
};

int main() {
	for (int i = 0; i < vert.size(); i = i + 2) {
		for (int a = 0; a < vert[i]; a++) {
			std::cout << " ";
		}
		//borked y axis calc lmao
		for (int b = 0; b < vert[i + 1]; b++) {
			std::cout << "\n";
		}
		std::cout << "#";
		std::cout << i;
	}
	return 0;
}
