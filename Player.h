	#pragma once

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

const string DATA_FILE_PLAYERS = "data_player.txt";

struct Player
{
	string name;	// ���
	string birth;	// ���� ��������
	int matches = 0;	// �����
	int goals = 0;	// ������� ����
	int assists = 0;	// ������� ��������
	int yellow = 0;	// ������ ��������
	int red = 0;	// ������� ��������
};

void listPlayer(vector<Player>& vec_of_player);	// ���� ��� ������ � ��������
int menuPlayer();	// �������� ����
void addPlayer(vector<Player>& vec_of_player);	// �������� ������ � � ������, � � ����
void showPlayer(vector<Player>& vec_of_player);	// �������� �������
void deletePlayer(vector<Player>& vec_of_player);	// ������� ������
void updatePlayer(vector<Player>& vec_of_player);	// �������� ������ ������
void writeFilePlayer(vector<Player>& vec_of_player);	// �������� ������� � ����
void readFilePlayer(vector<Player>& vec_of_player);	// ��������� ���� � ����������
int getCountOfStructuresPlayer(string file_path);	// �������� ���-�� ����� ��� ��������������
