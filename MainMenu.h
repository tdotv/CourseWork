#pragma once

#include "Validation.h"
#include "Account.h"
#include "Player.h"
#include "UserMenu.h"
#include "sha256.h"
#include "DateAndTime.h"

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;

void mainMenu(vector<Account>& vec_of_account, vector<Player>& vec_of_player);	// ���� ����������� � �����������
void authorization(vector<Account>& vec_of_account, vector<Player>& vec_of_player);	// �����������
void adminMenu(vector<Account>& vec_of_account, vector<Player>& vec_of_player);	// ���� �������������� �� ������ ��� ��������� ������
void workWithAccountMenu(vector<Account>& vec_of_account); // ���� ������ � ����������
void workWithDataMenu(vector<Player>& vec_of_player);	// ���� ������ � ������� �������
