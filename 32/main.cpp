#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Items {
	int max_items;
	
}game;
int CountItems(int *items) {
	int sum = 0;
	for(int i = 0; i < game.max_items; i++) {
		sum += game.max_items;
	}
}

int main(int argc, char** argv) {
	cout << "Сума: " << CountItems({3, 6, 12});
	return 0;
}
