#pragma once

#include "sha256.h"
#include "Validation.h"

#include <conio.h>
#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <iomanip>

using namespace std;

const string ADMIN_LOGIN = "ADMIN";
const string ADMIN_PASSWORD = "BSUIR";
const int ADMIN_ROLE = 1;
const int ADMIN_ACCESS = 1;

const string DATA_FILE_ACCOUNTS = "data_account.txt";

struct Account
{
	string login;
	string password;
	int role = 0;
	int access = 0;
	string salt;
	string salted_hash_password;
};

void listAccount(vector<Account>&vec_of_account);	// ���� ��� ������ � ����������
int menuAccount();	// �������� ����
void addAccount(vector<Account>& vec_of_account);	// �������� ������� � � ������, � � ����
void showAccount(vector<Account>& vec_of_account);	// �������� ��������
void deleteAccount(vector<Account>& vec_of_account);	// ������� �������
void updateAccount(vector<Account>& vec_of_account);	// �������� ������ ��������
void writeFileAccount(vector<Account>& vec_of_account);	// �������� ������ � ����
void readFileAccount(vector<Account>& vec_of_account);	// ��������� ���� � ����������
int getCountOfStructuresAccount(string file_path);	// �������� ���-�� ����� ����� ��� ��������������
string loginRepeatCheck(vector<Account>& vec_of_account);	// �������� �� �������������� ������
string passwordCheck();	// �������� �� ������, ����� ��� �� 6 �� 16 ��������
string repeatPasswordCheck(string password);	// ���������� ������
string passwordStar();	// ������ ������ ���������� ��� �����