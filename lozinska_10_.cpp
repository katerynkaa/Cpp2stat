#include <stdio.h>
#include <stdlib.h>

struct Date {
	unsigned day;
	unsigned month;
	int year;
};

int inputDate(struct Date* dd) {
	printf("\nDay:");
	scanf_s(" %u", &(dd->day));
	printf("\nMonth:");
	scanf_s(" %u", &(dd->month));
	printf("Year:");
	scanf_s(" %d", &(dd->year));
	return 0;
}

void outputDate(struct Date dd) {
	printf("%u.%u.%d", dd.day, dd.month, dd.year);
}

////////////////////////////////////////////////////////
struct ChessField {
	char hor;
	unsigned char ver;
};

int inputChess(struct ChessField* cf) {
	printf("\nH:");
	scanf_s(" %c", &(cf->hor));
	printf("V:");
	scanf_s(" %hhu", &(cf->ver));

	if ((cf->ver) > 8 || (cf->ver) == 0) return 1;
	if ((cf->hor) < 'a' || (cf->hor) > 'h') return 2;
	return 0;
}

void oututChess(struct ChessField cf) {
	printf("%c%hhu", cf.hor, cf.ver);
}

/////////////////////////////////////////////////////
typedef struct {
	float x, y;	
} Vertex;


typedef struct {
	Vertex A;
	Vertex B;
}Rectangle;

int inputRect(Rectangle* r) {
	printf("A(x,y):");
	scanf_s("%f %f", &(r->A.x), &(r->A.y));
	printf("B(x,y):");
	scanf_s("%f %f", &(r->B.x), &(r->B.y));
	return 0;
}

void outputRect(const Rectangle r) {
	printf("A(%f, %f) - B(%f, %f)", r.A.x, r.A.y, r.B.x, r.B.y);
}

int main() {
	//Rectangle r;
	//inputRect(&r);
	//outputRect(r);

	/*struct ChessField w1, w2;
	if (!inputChess(&w1)) {    //if not 0
		oututChess(w1);
	}

	if (!inputChess(&w2)) {
		oututChess(w2);
	}*/


}