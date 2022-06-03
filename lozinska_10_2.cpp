#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ChessField {
	char hor; //a
	unsigned char ver; //1
};

bool inputChess(struct ChessField* cf) {
	printf("\nHorizontally:");
	scanf_s(" %c", &(cf->hor));
	printf("Vertically:");
	scanf_s(" %hhu", &(cf->ver));

	if ((cf->ver) > 8 || (cf->ver) == 0) return false;
	if ((cf->hor) < 'a' || (cf->hor) > 'h') return false;
	return true;
}


bool ability(struct ChessField w1, struct ChessField w2) {

	if (abs(w1.hor - w2.hor) == abs(w1.ver - w2.ver) || abs(w1.hor - w2.hor) == 0 || abs(w1.ver - w2.ver) == 0) return true;
	else return false;
}


int main() {

	bool a;

	struct ChessField w1, w2;
	if (inputChess(&w1) && inputChess(&w2)) {
		a = ability(w1, w2);
	}
	else printf("Wrong input");

	printf("\nAbility to go from %c%hhu to %c%hhu is: %d", w1.hor, w1.ver, w2.hor, w2.ver, a);

}