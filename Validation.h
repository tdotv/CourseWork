#pragma once

#include "sha256.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <conio.h>
#include <Windows.h>

using namespace std;

const int LIMIT = 3;
const int SALT_SIZE = 16; // ����� ����
const int SYMBOLS_SIZE = 62; // ����� ��������, �� ������� ������������ ����

int correctInputInt();	// �������� �� ���� int �����
string checkDate();	// �������� �� ���� ����
string enterText();	// ���� ������ ������
string generateSalt(int salt_size);	// ������� ��������� ����
string getSymbolsForSalt();	// ������� ������������ ������ ��������
bool delete�onfirmation();	// ������������� ��������
bool isCorrectDate(int day, int month, int year);	// ��������� ���������� ��� checkDate