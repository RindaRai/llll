#include <stdio.h>
#include <iostream>
#include<locale.h>



int main() {
	setlocale(LC_ALL, "");

	

	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	printf("����� ��� ����� ����������������?\n ��� ����� - 1\n ���������� - 2\n ��������� - 3\n ������������ - 4\n ������������ - 5\n � �� ����, �������� �� ���� - 6\n ");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1: printf("������� �� Scratch, ����� Python\n"); break;
	case 6: printf("Python\n"); break; 
	case 2: printf("��� ���� ���� ��� �������� - 1\n ����� ������ - 2\n");
		scanf_s("%d", &k);
		switch (k) {
		case 1: goto lol; break;
		case 2: goto lol; break;
		}

	case 3:
	case 4:
	case 5: printf("��� ���� ���� �� �������? 1//0\n");
		scanf_s("%d", &b);
		switch (b) {
		lol:
		case 1: printf("����� ���������//�����?\n 3d-���� - 1\n ��������� - 2\n ����. ���� - 3\n ��� - 4\n");
			scanf_s("%d", &c);
			switch (c) {
			case 2: printf("����� ��?\n Ios - 1\n Android - 2\n");
				scanf_s("%d", &d);
				switch (d) {
				case 1: printf("OBJECTIVE-C\n"); break;
				case 2: printf("JAVA\n"); break;
				}
			case 1: printf("C++\n"); break;
			case 3: printf("��� ������� � Windows?\n ����� ��� - 1\n ������� - 2\n ��� - 3\n");
				scanf_s("%d", &e);
				switch (e) {
				case 1: printf("C#\n"); break;
				case 2: printf("JAVA\n"); break;
				case 3: printf("JAVA\n"); break;
				}

			case 4: printf("��� ������ ����� �������� � �������� �������? 1//0\n");
				scanf_s("%d", &f);
				switch (f) {
					lol2:
				case 0: printf("������ ����������� ���-�� �����, �� �� ����� ����������? 1//0\n");
					scanf_s("%d", &g);
					switch (g) {
					case 0: printf("����� � ��� ������� �������?\n LEGO - 1\n ��������� - 2\n ����������, �� ������� ����� - 3\n");
						scanf_s("%d", &h);
						switch (h) {
						case 1: printf("PYTHON\n"); break;
						case 2:printf("RUBY\n"); break;
						case 3:printf("PhP\n"); break;
						}
					case 1: printf("JavaScript\n"); break;

					}
				case 1: printf("JavaScript\n"); break;
				}
			}
		case 0: printf("��� �������� �������\n ������� �������� - 1\n ������ �������� - 2\n ����������� �������� - 3\n ����� ������� ���� (�� ����� ����� �����) - 4\n");
			scanf_s("%d", &i);
			switch (i) {
			case 1: printf("PYTHON\n"); break;
			case 2:printf("PYTHON\n"); break;
			case 3:printf("����� ������� �������?\n ������� - 1\n ������ - 2\n");
				scanf_s("%d", &j);
				switch (j) {
				case 1: printf("JAVA\n"); break;
				case 2: printf("C\n"); break;
				}
			case 4:printf("C++\n"); break;
			}

		}
		break;
	}

	


	system("pause");
}