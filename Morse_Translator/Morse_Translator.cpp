#include "pch.h"
#include <iostream>
#include <fstream> // Работа с файлами
#include <windows.h> // SetConsole...
#include <conio.h> //_getch()...
#include <string.h>
#include <MMSystem.h>

using namespace std;
#pragma comment(lib, "winmm") // Для корректного релиза программы

void main_menu() // Отрисовка главного меню
{
	system("cls");
	int a = 219;
	printf(" ________________________________________________________________________________\n");
	printf("|                     ##   ##   ####   #####    ####   #####                     |\n");
	printf("|                     ### ###  ##  ##  ##  ##  ##      ##                        |\n");
	printf("|                     ## # ##  ##  ##  #####    ####   ####                      |\n");
	printf("|                     ##   ##  ##  ##  ##  ##      ##  ##                        |\n");
	printf("|                     ##   ##   ####   ##  ##   ####   #####                     |\n");
	printf("|                     FROM TEXT       --->     TO MORSE CODE                     |\n");
	printf("| ######  #####    ####   ##  ##   ####   ##       ####   ######   ####   #####  |\n");
	printf("|   ##    ##  ##  ##  ##  ### ##  ##      ##      ##  ##    ##    ##  ##  ##  ## |\n");
	printf("|   ##    #####   ######  ## ###   ####   ##      ######    ##    ##  ##  #####  |\n");
	printf("|   ##    ##  ##  ##  ##  ##  ##      ##  ##      ##  ##    ##    ##  ##  ##  ## |\n");
	printf("|   ##    ##  ##  ##  ##  ##  ##   ####   ######  ##  ##    ##     ####   ##  ## |\n");
	printf(" ________________________________________________________________________________\n");
	printf("|     Управление меню - клавиши 1, 2, 3, 4.                                      |\n");
	printf("| 1. Ввод текста с клавиатуры --> перевод текста в морзянку                      |\n");
	printf("| 2. Ввод текста из файла --> перевод текста в морзянку                          |\n");
	printf("| 3. Справка                                                                     |\n");
	printf("| 4. Выход из программы                                                          |\n");
	printf(" ________________________________________________________________________________\n");

}

void from_input() // Перевод текста из введённой с клавиатуры строки
{
	int i, dlinastroki;
	char stroka[300];
	fstream f;

	system("cls");

	printf(" ________________________________________________________________________________\n");
	printf("|     Введите вашу строку (макс. 300 символов), затем нажмите клавишу ENTER      |\n");
	printf(" "); gets_s(stroka);
	printf("|                                                                                |\n");
	printf(" ");
	
	dlinastroki = strlen(stroka);
	f.open("text_sound.txt", ios::out);
	for (i = 0; i < dlinastroki; i++)
	{
		switch (stroka[i])
		{
		case ' ': printf("    "); f << "#"; break;  // Пробел

		case '0': printf("<----->"); f << "-----#"; break; // Цифры
		case '1': printf("<.---->"); f << ".----#"; break;
		case '2': printf("<..--->"); f << "..---#"; break;
		case '3': printf("<...-->"); f << "...--#"; break;
		case '4': printf("<....->"); f << "....-#"; break;
		case '5': printf("<.....>"); f << ".....#"; break;
		case '6': printf("<-....>"); f << "-....#"; break;
		case '7': printf("<--...>"); f << "--...#"; break;
		case '8': printf("<---..>"); f << "---..#"; break;
		case '9': printf("<----->"); f << "-----#"; break;
		
		case 'a':printf("<.->");   f << ".-#"; break;	  // Строчные латинские буквы
		case 'b':printf("<-...>"); f << "-...#"; break;
		case 'c':printf("<-.-.>"); f << "-.-.#"; break;
		case 'd':printf("<-..>");  f << "-..#"; break;
		case 'e':printf("<.>");    f << ".#"; break;
		case 'f':printf("<..-.>"); f << "..-.#"; break;
		case 'g':printf("<--.>");  f << "--.#"; break;
		case 'h':printf("<....>"); f << "....#"; break;
		case 'i':printf("<..>");    f << "..#"; break;
		case 'j':printf("<.--->"); f << ".---#"; break;
		case 'k':printf("<-.->");  f << "-.-#"; break;
		case 'l':printf("<.-..>"); f << ".-..#"; break;
		case 'm':printf("<-->");   f << "--#"; break;
		case 'n':printf("<-.>");   f << "-.#"; break;
		case 'o':printf("<--->");  f << "---#"; break;
		case 'p':printf("<.--.>"); f << ".--.#"; break;
		case 'q':printf("<--.->"); f << "--.-#"; break;
		case 'r':printf("<.-.>");  f << ".-.#"; break;
		case 's':printf("<...>");  f << "...#"; break;
		case 't':printf("<->");    f << "-#"; break;
		case 'u':printf("<..->");  f << "..-#"; break;
		case 'v':printf("<...->"); f << "...-#"; break;
		case 'w':printf("<.-->");  f << ".--#"; break;
		case 'x':printf("<-..->"); f << "-..-#"; break;
		case 'y':printf("<-.-->"); f << "-.--#"; break;
		case 'z':printf("<--..>"); f << "--..#"; break;

		case 'A':printf("<.->");   f << ".-#"; break;		// Прописные латинские буквы
		case 'B':printf("<-...>"); f << "-...#"; break;
		case 'C':printf("<-.-.>"); f << "-.-.#"; break;
		case 'D':printf("<-..>");  f << "-..#"; break;
		case 'E':printf("<.>");    f << ".#"; break;
		case 'F':printf("<..-.>"); f << "..-.#"; break;
		case 'G':printf("<--.>");  f << "--.#"; break;
		case 'H':printf("<....>"); f << "....#"; break;
		case 'I':printf("<..>");    f << ".#"; break;
		case 'J':printf("<.--->"); f << ".---#"; break;
		case 'K':printf("<-.->");  f << "-.-#"; break;
		case 'L':printf("<.-..>"); f << ".-..#"; break;
		case 'M':printf("<-->");   f << "--#"; break;
		case 'N':printf("<-.>");   f << "-.#"; break;
		case 'O':printf("<--->");  f << "---#"; break;
		case 'P':printf("<.--.>"); f << ".--.#"; break;
		case 'Q':printf("<--.->"); f << "--.-#"; break;
		case 'R':printf("<.-.>");  f << ".-.#"; break;
		case 'S':printf("<...>");  f << "...#"; break;
		case 'T':printf("<->");    f << "-#"; break;
		case 'U':printf("<..->");  f << "..-#"; break;
		case 'V':printf("<...->"); f << "...-#"; break;
		case 'W':printf("<.-->");  f << ".--#"; break;
		case 'X':printf("<-..->"); f << "-..-#"; break;
		case 'Y':printf("<-.-->"); f << "-.--#"; break;
		case 'Z':printf("<--..>"); f << "--..#"; break;
											
		case 'а':printf("<.->");    f << ".-#"; break; // Строчные кириллические символы
		case 'б':printf("<-...>");  f << "-...#"; break;
		case 'в':printf("<.-->");   f << ".--#"; break;
		case 'г':printf("<--.>");   f << "--.#"; break;
		case 'д':printf("<-..>");   f << "-..#"; break;
		case 'е':printf("<.>");     f << ".#"; break;
		case 'ё':printf("<.>");     f << ".#"; break;
		case 'ж':printf("<...->");  f << "...-#"; break;
		case 'з':printf("<--..>");  f << "--..#"; break;
		case 'и':printf("<..>");    f << "..#"; break;
		case 'й':printf("<.--->");  f << ".---#"; break;
		case 'к':printf("<-.->");   f << "-.-#"; break;
		case 'л':printf("<.-..>");  f << ".-..#"; break;
		case 'м':printf("<-->");    f << "--#"; break;
		case 'н':printf("<-.>");    f << "-.#"; break;
		case 'о':printf("<--->");   f << "---#"; break;
		case 'п':printf("<.--.>");  f << ".--.#"; break;
		case 'р':printf("<.-.>");   f << ".-.#"; break;
		case 'с':printf("<...>");   f << "...#"; break;
		case 'т':printf("<->");     f << "-#"; break;
		case 'у':printf("<..->");   f << "..-#"; break;
		case 'ф':printf("<..-.>");  f << "..-.#"; break;
		case 'х':printf("<....>");  f << "....#"; break;
		case 'ц':printf("<-.-.>");  f << "-.-.#"; break;
		case 'ч':printf("<---.>");  f << "---.#"; break;
		case 'ш':printf("<---->");  f << "----#"; break;
		case 'щ':printf("<--.->");  f << "--.-#"; break;
		case 'ъ':printf("<--.-->"); f << "--.--#"; break;
		case 'ы':printf("<-.-->");  f << "-.--#"; break;
		case 'ь':printf("<-..->");  f << "-..-#"; break;
		case 'э':printf("<..-..>"); f << "..-..#"; break;
		case 'ю':printf("<..-->");  f << "..--#"; break;
		case 'я':printf("<.-.->");  f << ".-.-#"; break;

		case 'А':printf("<.->");    f << ".-#"; break; //Прописные кириллические символы
		case 'Б':printf("<-...>");  f << "-...#"; break;
		case 'В':printf("<.-->");   f << ".--#"; break;
		case 'Г':printf("<--.>");   f << "--.#"; break;
		case 'Д':printf("<-..>");   f << "-..#"; break;
		case 'Е':printf("<.>");     f << ".#"; break;
		case 'Ё':printf("<.>");     f << ".#"; break;
		case 'Ж':printf("<...->");  f << "...-#"; break;
		case 'З':printf("<--..>");  f << "--..#"; break;
		case 'И':printf("<..>");    f << "..#"; break;
		case 'Й':printf("<.--->");  f << ".---#"; break;
		case 'К':printf("<-.->");   f << "-.-#"; break;
		case 'Л':printf("<.-..>");  f << ".-..#"; break;
		case 'М':printf("<-->");    f << "--#"; break;
		case 'Н':printf("<-.>");    f << "-.#"; break;
		case 'О':printf("<--->");   f << "---#"; break;
		case 'П':printf("<.--.>");  f << ".--.#"; break;
		case 'Р':printf("<.-.>");   f << ".-.#"; break;
		case 'С':printf("<...>");   f << "...#"; break;
		case 'Т':printf("<->");     f << "-#"; break;
		case 'У':printf("<..->");   f << "..-#"; break;
		case 'Ф':printf("<..-.>");  f << "..-.#"; break;
		case 'Х':printf("<....>");  f << "....#"; break;
		case 'Ц':printf("<-.-.>");  f << "-.-.#"; break;
		case 'Ч':printf("<---.>");  f << "---.#"; break;
		case 'Ш':printf("<---->");  f << "----#"; break;
		case 'Щ':printf("<--.->");  f << "--.-#"; break;
		case 'Ъ':printf("<--.-->"); f << "--.--#"; break;
		case 'Ы':printf("<-.-->");  f << "-.--#"; break;
		case 'Ь':printf("<-..->");  f << "-..-#"; break;
		case 'Э':printf("<..-..>"); f << "..-..#"; break;
		case 'Ю':printf("<..-->");  f << "..--#"; break;
		case 'Я':printf("<.-.->");  f << ".-.-#"; break;
		}
	}
	f.close();
	
	printf("\n|________________________________________________________________________________|\n");
}

void beeper_sound() // Озвучка полученных точек и тире
{
	int ed = 90;
	char symbol;
	fstream f;
	f.open("text_sound.txt");

	if (f)
	{
		while (!f.eof())
		{
			f >> symbol;
			switch (symbol)
			{
			case '.':  PlaySound(TEXT("dot.wav"), NULL, SND_FILENAME); break;
			case '-':  PlaySound(TEXT("dash.wav"), NULL, SND_FILENAME);   break;
			case '#':  PlaySound(TEXT("spacebar_short.wav"), NULL, SND_FILENAME);   break;
			case '##': PlaySound(TEXT("spacebar_long.wav"), NULL, SND_FILENAME);   break;
			}
		}
	}

	f.close();
	
	printf(" Нажмите любую клавишу, чтобы вернуться в главное меню...");
	_getch();
}

void about_from_file() // Отрисовка справки для перевода из файла
{
	system("cls");
	printf(" ________________________________________________________________________________\n");
	printf("|  Чтобы осуществить перевод в морзянку текста из файла, необходимо:             |\n");
	printf("|                                                                                |\n");
	printf("| Шаг 1: Открыть текстовый файл  text_input',  находящийся  в папке с программой |\n");
	printf("| Шаг 2: Записать туда необходимый для перевода текст (макс. 300 символов)       |\n");
	printf("| Шаг 3: Сохранить файл                                                          |\n");
	printf("| Шаг 4: Вернуться в консоль и нажать любую клавишу для осуществления перевода   |\n");
	printf(" ________________________________________________________________________________\n");
	printf("| Нажмите любую клавишу, если вы выполнили все вышеуказанные действия...         |\n");
	_getch();
}

void from_file() // Перевод текста из полученной из файла строки
{
	int i, dlinastroki = 0;
	char stroka[300];
	fstream f;

	f.open("text_input.txt", ios::in);
	while (!f.eof())
	{
		f.get(stroka[dlinastroki]); // Получаем слова из файла (функция учитывает пробелы)
		dlinastroki++;
	}
	f.close();

	printf(" ________________________________________________________________________________\n");
	printf("| Текст, полученный из файла представлен ниже:                                   |\n");
	printf("  '");
	for (i = 0; i < dlinastroki - 1; i++)
	{
		printf("%c", stroka[i]);
	}
	printf("'\n\n");
	printf("| Перевод текста в 'морзянку' представлен ниже:                                  |\n");
	printf("  ");

	f.open("text_sound.txt", ios::out);
	for (i = 0; i < dlinastroki - 1; i++)
	{
		switch (stroka[i])
		{
		case ' ': printf("    "); f << "#"; break;  // Пробел

		case '0': printf("<----->"); f << "-----#"; break; // Цифры
		case '1': printf("<.---->"); f << ".----#"; break;
		case '2': printf("<..--->"); f << "..---#"; break;
		case '3': printf("<...-->"); f << "...--#"; break;
		case '4': printf("<....->"); f << "....-#"; break;
		case '5': printf("<.....>"); f << ".....#"; break;
		case '6': printf("<-....>"); f << "-....#"; break;
		case '7': printf("<--...>"); f << "--...#"; break;
		case '8': printf("<---..>"); f << "---..#"; break;
		case '9': printf("<----->"); f << "-----#"; break;

		case 'a':printf("<.->");   f << ".-#"; break;	  // Строчные латинские буквы
		case 'b':printf("<-...>"); f << "-...#"; break;
		case 'c':printf("<-.-.>"); f << "-.-.#"; break;
		case 'd':printf("<-..>");  f << "-..#"; break;
		case 'e':printf("<.>");    f << ".#"; break;
		case 'f':printf("<..-.>"); f << "..-.#"; break;
		case 'g':printf("<--.>");  f << "--.#"; break;
		case 'h':printf("<....>"); f << "....#"; break;
		case 'i':printf("<..>");    f << "..#"; break;
		case 'j':printf("<.--->"); f << ".---#"; break;
		case 'k':printf("<-.->");  f << "-.-#"; break;
		case 'l':printf("<.-..>"); f << ".-..#"; break;
		case 'm':printf("<-->");   f << "--#"; break;
		case 'n':printf("<-.>");   f << "-.#"; break;
		case 'o':printf("<--->");  f << "---#"; break;
		case 'p':printf("<.--.>"); f << ".--.#"; break;
		case 'q':printf("<--.->"); f << "--.-#"; break;
		case 'r':printf("<.-.>");  f << ".-.#"; break;
		case 's':printf("<...>");  f << "...#"; break;
		case 't':printf("<->");    f << "-#"; break;
		case 'u':printf("<..->");  f << "..-#"; break;
		case 'v':printf("<...->"); f << "...-#"; break;
		case 'w':printf("<.-->");  f << ".--#"; break;
		case 'x':printf("<-..->"); f << "-..-#"; break;
		case 'y':printf("<-.-->"); f << "-.--#"; break;
		case 'z':printf("<--..>"); f << "--..#"; break;

		case 'A':printf("<.->");   f << ".-#"; break;		// Прописные латинские буквы
		case 'B':printf("<-...>"); f << "-...#"; break;
		case 'C':printf("<-.-.>"); f << "-.-.#"; break;
		case 'D':printf("<-..>");  f << "-..#"; break;
		case 'E':printf("<.>");    f << ".#"; break;
		case 'F':printf("<..-.>"); f << "..-.#"; break;
		case 'G':printf("<--.>");  f << "--.#"; break;
		case 'H':printf("<....>"); f << "....#"; break;
		case 'I':printf("<..>");    f << ".#"; break;
		case 'J':printf("<.--->"); f << ".---#"; break;
		case 'K':printf("<-.->");  f << "-.-#"; break;
		case 'L':printf("<.-..>"); f << ".-..#"; break;
		case 'M':printf("<-->");   f << "--#"; break;
		case 'N':printf("<-.>");   f << "-.#"; break;
		case 'O':printf("<--->");  f << "---#"; break;
		case 'P':printf("<.--.>"); f << ".--.#"; break;
		case 'Q':printf("<--.->"); f << "--.-#"; break;
		case 'R':printf("<.-.>");  f << ".-.#"; break;
		case 'S':printf("<...>");  f << "...#"; break;
		case 'T':printf("<->");    f << "-#"; break;
		case 'U':printf("<..->");  f << "..-#"; break;
		case 'V':printf("<...->"); f << "...-#"; break;
		case 'W':printf("<.-->");  f << ".--#"; break;
		case 'X':printf("<-..->"); f << "-..-#"; break;
		case 'Y':printf("<-.-->"); f << "-.--#"; break;
		case 'Z':printf("<--..>"); f << "--..#"; break;

		case 'а':printf("<.->");    f << ".-#"; break; // Строчные кириллические символы
		case 'б':printf("<-...>");  f << "-...#"; break;
		case 'в':printf("<.-->");   f << ".--#"; break;
		case 'г':printf("<--.>");   f << "--.#"; break;
		case 'д':printf("<-..>");   f << "-..#"; break;
		case 'е':printf("<.>");     f << ".#"; break;
		case 'ё':printf("<.>");     f << ".#"; break;
		case 'ж':printf("<...->");  f << "...-#"; break;
		case 'з':printf("<--..>");  f << "--..#"; break;
		case 'и':printf("<..>");    f << "..#"; break;
		case 'й':printf("<.--->");  f << ".---#"; break;
		case 'к':printf("<-.->");   f << "-.-#"; break;
		case 'л':printf("<.-..>");  f << ".-..#"; break;
		case 'м':printf("<-->");    f << "--#"; break;
		case 'н':printf("<-.>");    f << "-.#"; break;
		case 'о':printf("<--->");   f << "---#"; break;
		case 'п':printf("<.--.>");  f << ".--.#"; break;
		case 'р':printf("<.-.>");   f << ".-.#"; break;
		case 'с':printf("<...>");   f << "...#"; break;
		case 'т':printf("<->");     f << "-#"; break;
		case 'у':printf("<..->");   f << "..-#"; break;
		case 'ф':printf("<..-.>");  f << "..-.#"; break;
		case 'х':printf("<....>");  f << "....#"; break;
		case 'ц':printf("<-.-.>");  f << "-.-.#"; break;
		case 'ч':printf("<---.>");  f << "---.#"; break;
		case 'ш':printf("<---->");  f << "----#"; break;
		case 'щ':printf("<--.->");  f << "--.-#"; break;
		case 'ъ':printf("<--.-->"); f << "--.--#"; break;
		case 'ы':printf("<-.-->");  f << "-.--#"; break;
		case 'ь':printf("<-..->");  f << "-..-#"; break;
		case 'э':printf("<..-..>"); f << "..-..#"; break;
		case 'ю':printf("<..-->");  f << "..--#"; break;
		case 'я':printf("<.-.->");  f << ".-.-#"; break;

		case 'А':printf("<.->");    f << ".-#"; break; //Прописные кириллические символы
		case 'Б':printf("<-...>");  f << "-...#"; break;
		case 'В':printf("<.-->");   f << ".--#"; break;
		case 'Г':printf("<--.>");   f << "--.#"; break;
		case 'Д':printf("<-..>");   f << "-..#"; break;
		case 'Е':printf("<.>");     f << ".#"; break;
		case 'Ё':printf("<.>");     f << ".#"; break;
		case 'Ж':printf("<...->");  f << "...-#"; break;
		case 'З':printf("<--..>");  f << "--..#"; break;
		case 'И':printf("<..>");    f << "..#"; break;
		case 'Й':printf("<.--->");  f << ".---#"; break;
		case 'К':printf("<-.->");   f << "-.-#"; break;
		case 'Л':printf("<.-..>");  f << ".-..#"; break;
		case 'М':printf("<-->");    f << "--#"; break;
		case 'Н':printf("<-.>");    f << "-.#"; break;
		case 'О':printf("<--->");   f << "---#"; break;
		case 'П':printf("<.--.>");  f << ".--.#"; break;
		case 'Р':printf("<.-.>");   f << ".-.#"; break;
		case 'С':printf("<...>");   f << "...#"; break;
		case 'Т':printf("<->");     f << "-#"; break;
		case 'У':printf("<..->");   f << "..-#"; break;
		case 'Ф':printf("<..-.>");  f << "..-.#"; break;
		case 'Х':printf("<....>");  f << "....#"; break;
		case 'Ц':printf("<-.-.>");  f << "-.-.#"; break;
		case 'Ч':printf("<---.>");  f << "---.#"; break;
		case 'Ш':printf("<---->");  f << "----#"; break;
		case 'Щ':printf("<--.->");  f << "--.-#"; break;
		case 'Ъ':printf("<--.-->"); f << "--.--#"; break;
		case 'Ы':printf("<-.-->");  f << "-.--#"; break;
		case 'Ь':printf("<-..->");  f << "-..-#"; break;
		case 'Э':printf("<..-..>"); f << "..-..#"; break;
		case 'Ю':printf("<..-->");  f << "..--#"; break;
		case 'Я':printf("<.-.->");  f << ".-.-#"; break;
		}
	}
	f.close();
	
	printf("\n");
	printf("|                                                                                |\n");
	printf(" ________________________________________________________________________________\n");

}

void about() // О программе, о создателе...
{
	system("cls");
	printf(" ________________________________________________________________________________\n");
	printf("|      Код морзе - способ  кодирования  текстовой информации  последовательностью|\n");
	printf("|сигналов: длинных (точек) и коротких (тире). За единицу времени принимается дли-|\n");
	printf("|тельность одной точки. Длительность тире - 3 точки. Пауза между символами в сло-|\n");
	printf("|ве - 3 точки, между словами - 7 точек.                                          |\n");
	printf("|      Программа 'Morse Translator' позволяет  переводить последовательность при-|\n");
	printf("|вычных символов в последовательность  точек и тире.  В программе реализованы два|\n");
	printf("|вида ввода пользовательского текста: с клавиатуры, либо путём импорта стороннего|\n");
	printf("|текстового файла в корневую папку программы.                                    |\n");
	printf("|                                                                                |\n");
	printf("|                                                                                |\n");
	printf("|                                                                                |\n");
	printf("|                                                                                |\n");
	printf("|                                                                                |\n");
	printf("|      Данная программа создана в рамках курсовой  работы по дисциплине 'Програм-|\n");
	printf("|мирование'.                                                                     |\n");
	printf("|      Автор программы: студент ТУСУР  группы 548-1 Толстов Т.В.                 |\n");
	printf("|      Электронная почта для связи с автором: timofey.tolstov@yandex.ru          |\n");
	printf(" ________________________________________________________________________________\n");
	printf(" Нажмите любую клавишу, чтобы вернуться в главное меню...");
	_getch();
}

int main() 
{
	char choice; 
	
	system("color F0");
	system("title ''Morse Translator - From text to morse code''");
	system("mode con cols=82 lines=20");

	menu_point:                   // "Чекпоинт" для возврата в главное меню
	
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);     // Для поддержки киррилических
	SetConsoleCP(1251);			  // вводимых символов

	main_menu();
	choice_point:                 // Чекпоинт для возврата к выбору
	choice = _getch();

	if ((choice == '1') || (choice == '2') || (choice == '3') || (choice == '4'))
	{
		switch (choice)
		{
		case ('1'): from_input(); beeper_sound();                      goto menu_point;       break;
		case ('2'): about_from_file();  from_file(); beeper_sound();   goto menu_point;     break;
		case ('3'): about();                                           goto menu_point;     break;
		case ('4'): break;
		}
	}
	else { goto choice_point; }
}