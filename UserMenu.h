#pragma once

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

#include "Account.h"
#include "Player.h"
#include "Sorts.h"
#include "Searches.h"
#include "Validation.h"
#include "DateAndTime.h"

using namespace std;

void userMenu(vector<Player>& vec_of_player);	// ���� ������������
void searchMenu(vector<Player>& vec_of_player);	// ���� ������
void sortMenu(vector<Player>& vec_of_player);	// ���� ����������
void individualTask(vector<Player>& vec_of_player);	// ������� ����� ������ ������� (���� + ��������) � ��������� �� ����������������. ������� ���� �������, ������� � ������ ������� ��������.