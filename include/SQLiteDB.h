#pragma once

#include <iostream>
#include <string>
#include "sqlite3.h"

class SQLiteDB
{
public:
	SQLiteDB();
	~SQLiteDB();
	int Open_DB(std::string); // ���������� 0 � ������ ��������� �������� ���� ������
	std::string Add_Any_URL(std::string); // ���������� �������� URL � ������ ������, "0" � ������ �������
	int Add_Custom_URL(std::string, std::string); // ���������� 0 � ������ ������, ������������� ��� ����������������� ��������� URL
	std::string Get_Full_URL(std::string);


private:
	std::string Get_Last_Short_URL();
	std::string Get_New_Short_URL(std::string);

	sqlite3* db;
	char* errorMessage = nullptr;
	int statusDB;
	bool DB_Open = 0;
};