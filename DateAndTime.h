#pragma once

#include <iostream>
#include <windows.h>
#include <time.h>
#include <string>

using namespace std;

struct Date
{
	string day;
	string month;
	string year;
};

struct Time
{
	string hour;
	string minute;
	string second;
};

Date getCurrentDate();	// �������� ������� ���� ���� dd.mm.yyyy
Time getCurrentTime();	// �������� ������� ����� ���� hh.mm.ss
void showDate(Date date);	// �������� ����
void showTime(Time time);	// �������� �����
void showNow(Date date, Time time);	// �������� ������� ���� � �����