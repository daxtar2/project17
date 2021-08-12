#include <stdio.h>

int main(void)
{
	int user_name;
	int password_s;
	int password_c;
	int input_t = 0;
	int withdrawal;
	/*
	printf("Please input your user_name.\n");
	scanf_s("%d", &user_name);

	printf("Please input your password.\n");
	scanf_s("%d", &password_s);

	printf("Please confirm your password.\n");
	scanf_s("%d", &password_c);

	if (password_c == password_s) {
		printf("The password is correct.\n");
	}
	else {
		for (; password_c != password_s; input_t += 1) {
			printf("The password is wrong .Please input the right password.\n");
			scanf_s("%d", &password_c);
			if (input_t >= 3) {
				printf("Too many entries and your account has been frozen.\n");
				return 0;
			}

		}
	}
	*/
	printf("Please input The amount of withdrawal.\n");
	scanf_s("%d", &withdrawal);
	if ( withdrawal >= 100 && withdrawal <= 1000 && withdrawal % 100 == 0) {
		printf("Withdrawal is over . Please take your card away.\n");
	}
	else {
		for (; withdrawal <= 100 && withdrawal >= 1000 && withdrawal % 100 != 0;) {
			printf("Please input The amount of withdrawal again.\n");
			scanf_s("%d", &withdrawal);
			return 0;
		}
	}
	return 0;



}