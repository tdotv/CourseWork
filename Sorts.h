#pragma once

#include "Account.h"
#include "Player.h"

#include<iostream>

using namespace std;

void sortAccountByLogin(vector<Account>& vec_of_account);	// ���������� �� ������
bool mySortByLogin(Account account_a, Account account_b); // ���������� �� ��������: �� � �� �

void sortPlayerByName(vector<Player>& vec_of_player);	// ���������� �� �����
bool CompSortByName(Player player_a, Player player_b);	// ���������� �� ��������: �� � �� �
void sortPlayerByMatches(vector<Player>& vec_of_player);	// ���������� �� ������
bool CompSortByMatches(Player player_a, Player player_b);	// ���������� �� ������
void sortPlayerByGoals(vector<Player>& vec_of_player);	// ���������� �� �����
bool CompSortByGoals(Player player_a, Player player_b);	// ���������� �� �����
void sortPlayerByRed(vector<Player>& vec_of_player);	// ���������� �� ������� ���������
bool CompSortByRed(Player player_a, Player player_b);	// ���������� �� ������� ���������

void sortPlayerByMVP(vector<Player>& vec_of_player);	// ���������� �� �������� ������
bool mySortByMVP(Player player_a, Player player_b);	// ���������� �� ��������