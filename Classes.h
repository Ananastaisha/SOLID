#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Classes.h"
using namespace std;

class Student
{
	string firstname; // им€ студента
	string surname; // фамили€ студента
	string lastname; // отчество студента
public:
	string GetFirstname();
	string GetSurname();
	string GetLastname();
	void SetFirstname(string firsname);
	void SetSurname(string surname);
	void SetLastname(string lastname);
};

struct Manager
{
	void SetGroupName(Group& group, string newgroupname);
	void SetSpecialization(Group& group, string specialization);
}; 

struct Teacher
{
	void AddDz_Rate();
	void AddPrac_Rate();
	void AddExam_Rate();
	void AddZalik_Rate();
};

class StudentBD
{
	int birth_day; // день рождени€
	int birth_month; // мес€ц рождени€
	int birth_year; // год рождени€
public:
	int GetBD();
	int GetBM();
	int GetBY();
	void SetBD(int birth_day);
	void SetBM(int birth_month);
	void SetBY(int birth_year);
};

class ZodiakSign:public StudentBD
{
	string znak_zodiaka;
	
public:
	string GetZodiak();
};

class CountSymZodiakSign :public ZodiakSign
{
	int length_zodiak;
public:
	int GetLengthZodiak() { length_zodiak = GetZodiak().size(); }
};

class CountSymName :public Student
{
	int firstname_length; // сколько символов в имени
	int surname_length; // сколько символов в фамилии
	int lastname_length; // сколько символов в отчестве
public:
	int GetFirstname_length() {return firstname_length = GetFirstname().size(); }
	int GetSurname_length() { return surname_length = GetSurname().size(); }
	int GetLastname_length() { return lastname_length = GetLastname().size(); }
};

class StudentAddres
{
	string country; // страна
	string region; // область
	string city; // город
	string street; // улица
	int house_number; // номер дома
	string korpus;
public:
	string GetCountry();
	string GetRegion();
	string GetCity();
	string GetStreet();
	int GetHouseNumber();
	string GetKorpus();
	void SetCountry(string country);
	void SetRegion(string region);
	void SetCity(string city);
	void SetStreet(string street);
	void SetHouseNumber(int house_number);
	void SetKorpus(string korpus);
};

class CountSymStudentAddrest :public StudentAddres
{
	int country_length;
	int region_length;
	int city_length;
	int street_length;
public:
	int GetCountry_length() { return country_length = GetCountry().size(); }
	int GetRegion_length() { return region_length = GetRegion().size(); }
	int GetCity_length() { return city_length = GetCity().size(); }
	int GetStreet_length() { return street_length = GetStreet().size(); }
};

class StartDate
{
	int start_day; // день поступлени€ в универ
	int start_month; // мес€ц поступлени€ в универ
	int start_year; // год поступлени€ в универ
public:
	int GetStartDay();
	int GetStartMonth();
	int GetStartYear();
	void SetStartDay(int start_day);
	void SetStartMonth(int start_month);
	void SetStartYear(int start_year);
};

class Kurs
{
	int kurs; // 1-5
public:
	int GetKurs();
	void SetKurs(int kurs);
};

class Group
{
	friend class Manager;
	string group_name; // название группы
	string specialization; // специализаци€ группы
	int students_count; // количество студентов в группе
public:
	string GetGroupName();
	string GetSpecialization();
};

class CountSymGroup:public Group
{
	int group_name_length;
	int specialization_length;
public:
	int GetGroup_name_length() { return group_name_length = GetGroupName().size(); }
	int GetSpecialization_length() { return specialization_length = GetSpecialization().size(); }
};

class HomeWork
{
	friend class Teacher;
	vector<int> dz_rates;
	int dz_count;
public:
	vector<int> GetDz_rates();
	int GetDz_count();
};

class Practice
{
	friend class Teacher;
	vector<int> practice_rates;
	int practice_count;
public:
	vector<int> GetPrac_rates();
	int GetPrac_count();
};

class Exam
{
	friend class Teacher;
	vector<int> exam_rates;
	int exam_count;
public:
	vector<int> GetExam_rates();
	int GetExam_count();
};

class Zalik
{
	friend class Teacher;
	vector<int> zalik_rates;
	int zalik_count;
public:
	vector<int> GetZalik_rates();
	int GetZalik_count();
};
