#include <stdio.h>
#include <math.h>

void task_4_3_a() {
	int n;
	float x, y, t;
	printf("x, n=");
	scanf_s("%f %d", &x, &n);

	t = 1;
	y = 1;
	for (int i = 0; i < n i++) {
		t *= x;
		y += t;

	}
	printf("y=%f", y);
}

void task_4_3_b() {
	int n = 4;
	float y = 3, x = 2, output, t_x, t_y, t_2, t;

	t_y = 1;
	t_x = 1;
	output = 1;
	t_2 = 1;
	for (int i = 0; i < n; i++) {
		t_y *= y;
		t_2 *= 2;

		for (int j = 0; j < t_2; j++) {
			t_x *= x;
		}
		output += t_y * t_x;
		t_x = 1;
		printf("f(x)= %f, n = %d\n", output, i);

	}
}

int main() {
	task_4_3_a();
	//task_4_3_b();
	
	}
	