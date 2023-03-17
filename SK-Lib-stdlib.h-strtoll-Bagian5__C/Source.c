#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str1[] = "123";
	char str2[] = "10.55";
	char str3[] = "100 some words";
	char str4[] = "some words 555";

	char* end;

	long long int num1 = strtoll(str1, &end, 10);
	long long int num2 = strtoll(str2, &end, 10);
	long long int num3 = strtoll(str3, &end, 10);
	long long int num4 = strtoll(str4, NULL, 10);

	//menampilkan hasil
	printf("strtoll(\"%s\") = %lld\n", str1, num1);
	printf("strtoll(\"%s\") = %lld\n", str2, num2);
	printf("strtoll(\"%s\") = %lld\n", str3, num3);
	printf("strtoll(\"%s\") = %lld\n", str4, num4);

	_getch();
	return 0;
}