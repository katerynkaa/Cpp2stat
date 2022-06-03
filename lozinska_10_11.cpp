#include <stdio.h>

#define N 7

struct Citizen{
	const char* f_name;
	const char* city;
	const char* adress;
	int house;
	int room;
};

void find_citizens(struct Citizen arr[N], int i, int j) {
	
	if (arr[i].city != arr[j].city) {

		if (arr[i].adress == arr[j].adress) {

			if (arr[i].house == arr[j].house) {

				if (arr[i].room == arr[j].room) {
					
					printf("citizen %s from %s lives on the same street %s in the same house number %d and has the same flat nuber %d as citizen %s from %s\n",
						arr[i].f_name, arr[i].city, arr[i].adress, arr[i].house, arr[i].room, arr[j].f_name, arr[j].city);
				}
				if (arr[i].room != arr[j].room) {
					
					printf("citizen %s from %s lives on the same street %s in the same house number %d as citizen %s from %s (flat number is different though %d and %d)\n",
						arr[i].f_name, arr[i].city, arr[i].adress, arr[i].house, arr[j].f_name, arr[j].city, arr[i].room, arr[j].room);
				}
			}

			if (arr[i].house != arr[j].house) {

				if (arr[i].room == arr[j].room) {
					
					printf("citizen %s from %s lives on the same street %s in the same flat number %d as citizen %s from %s (house number is different though %d and %d)\n",
						arr[i].f_name, arr[i].city, arr[i].adress, arr[i].room, arr[j].f_name, arr[j].city, arr[i].house, arr[j].house);
				
				}
				if (arr[i].room != arr[j].room) {
					
					printf("citizen %s from %s lives on the same street %s as citizen %s from %s (house and flat numbers are different though %d %d and %d %d)\n",
						arr[i].f_name, arr[i].city, arr[i].adress, arr[j].f_name, arr[j].city, arr[i].house, arr[i].room, arr[j].house, arr[j].room);
				}
			}
		}
	}

	j++;
	if (j == N) {
		i++;
		j = i + 1;
	}

	find_citizens(arr, i, j);
}

int main() {

	struct Citizen arr[N] = { {"Klymyn", "Kyiv", "Holosiivska", 1, 50},
		{"Zhur", "Khariv", "Pravdy", 50, 16},
		{"Blinova", "Zhytomyr", "Peremohy", 6, 43},
		{"Lozinskii", "Kyiv", "Hezalezhnosti", 10, 3},
		{"Zymovets", "Vinnytsia", "Peremohy", 6, 10},
		{"Yarmolenko", "Lviv", "Hezalezhnosti", 12, 5},
		{"Haluchko", "Odesa", "Holosiivska", 1, 60}};

	printf("All citizens in data base\n");
	for (int i = 0; i < N; i++) {
		printf("Citizen %d - %s %s %s %d %d\n ", i, arr[i].f_name, arr[i].city, arr[i].adress, arr[i].house, arr[i].room);
	}

	int i = 0;
	int j = 1;
	while(i!=N) find_citizens(arr, i, j);
	
}