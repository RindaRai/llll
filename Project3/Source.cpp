#include <stdio.h>
#include <iostream>
#include<locale.h>



int main() {
	setlocale(LC_ALL, "");

	

	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
	printf("Зачем вам нужно программирование?\n Для детей - 1\n заработать - 2\n интересно - 3\n поразвлечься - 4\n саморазвитие - 5\n я не знаю, выберите за меня - 6\n ");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1: printf("Начните со Scratch, затем Python\n"); break;
	case 6: printf("Python\n"); break; 
	case 2: printf("Уже есть идея для стартапа - 1\n Найти работу - 2\n");
		scanf_s("%d", &k);
		switch (k) {
		case 1: goto lol; break;
		case 2: goto lol; break;
		}

	case 3:
	case 4:
	case 5: printf("Уже есть идея на миллион? 1//0\n");
		scanf_s("%d", &b);
		switch (b) {
		lol:
		case 1: printf("Какая платформа//сфера?\n 3d-игры - 1\n Мобильная - 2\n Корп. софт - 3\n Веб - 4\n");
			scanf_s("%d", &c);
			switch (c) {
			case 2: printf("Какая ОС?\n Ios - 1\n Android - 2\n");
				scanf_s("%d", &d);
				switch (d) {
				case 1: printf("OBJECTIVE-C\n"); break;
				case 2: printf("JAVA\n"); break;
				}
			case 1: printf("C++\n"); break;
			case 3: printf("Что скажете о Windows?\n Люблю его - 1\n Неплохо - 2\n Фуу - 3\n");
				scanf_s("%d", &e);
				switch (e) {
				case 1: printf("C#\n"); break;
				case 2: printf("JAVA\n"); break;
				case 3: printf("JAVA\n"); break;
				}

			case 4: printf("Ваш сервис будет работать в реальном времени? 1//0\n");
				scanf_s("%d", &f);
				switch (f) {
					lol2:
				case 0: printf("Хотите попробовать что-то новое, но не очень трудоемкое? 1//0\n");
					scanf_s("%d", &g);
					switch (g) {
					case 0: printf("Какая у вас любимая игрушка?\n LEGO - 1\n Пластилин - 2\n Старенький, но любимый мишка - 3\n");
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
		case 0: printf("Мне нравится учиться\n Простым способом - 1\n Лучшим способом - 2\n Трудненьким способом - 3\n Очень сложный путь (но потом будет легче) - 4\n");
			scanf_s("%d", &i);
			switch (i) {
			case 1: printf("PYTHON\n"); break;
			case 2:printf("PYTHON\n"); break;
			case 3:printf("Какая коробка передач?\n Автомат - 1\n Ручная - 2\n");
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