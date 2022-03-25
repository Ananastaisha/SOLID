#include <iostream>
#include <string>
#include "Classes.h"
using namespace std;

string Student::GetFirstname()
{
	return firstname;
}

string Student::GetSurname()
{
	return surname;
}

string Student::GetLastname()
{
	return lastname;
}

void Student::SetFirstname(string firstname)
{
	this->firstname = firstname;
}

void Student::SetSurname(string surname)
{
	this->surname = surname;
}

void Student::SetLastname(string lastname)
{
	this->lastname = lastname;
}

int StudentBD::GetBD()
{
	return birth_day;
}

int StudentBD::GetBM()
{
	return birth_month;
}

int StudentBD::GetBY()
{
	return birth_year;
}

void StudentBD::SetBD(int birth_day)
{
	this->birth_day = birth_day;
}

void StudentBD::SetBM(int birth_month)
{
	this->birth_month = birth_month;
}

void StudentBD::SetBY(int birth_year)
{
	this->birth_year = birth_year;
}

string ZodiakSign::GetZodiak()
{
	int zodiac;
	zodiac = 100 * GetBD() + GetBM();
	if (zodiac >= 121 && zodiac <= 219)   znak_zodiaka = "Aquarius";
	if (zodiac >= 220 && zodiac <= 320)   znak_zodiaka = "Pisces";
	if (zodiac >= 321 && zodiac <= 420)   znak_zodiaka = "Aries";
	if (zodiac >= 421 && zodiac <= 521)   znak_zodiaka = "Taurus";
	if (zodiac >= 522 && zodiac <= 621)   znak_zodiaka = "Gemini";
	if (zodiac >= 621 && zodiac <= 722)   znak_zodiaka = "Cancer";
	if (zodiac >= 723 && zodiac <= 823)   znak_zodiaka = "Leo";
	if (zodiac >= 824 && zodiac <= 923)   znak_zodiaka = "Virgo";
	if (zodiac >= 924 && zodiac <= 1023)  znak_zodiaka = "Libra";
	if (zodiac >= 1024 && zodiac <= 1122) znak_zodiaka = "Scorpio";
	if (zodiac >= 1123 && zodiac <= 1221) znak_zodiaka = "Sagittarius";
	if (zodiac >= 1222 || zodiac <= 120)  znak_zodiaka = "Capricornus";
	return znak_zodiaka;
}

string StudentAddres::GetCountry()
{
	return country;
}

string StudentAddres::GetRegion()
{
	return region;
}

string StudentAddres::GetCity()
{
	return city;
}

string StudentAddres::GetStreet()
{
	return street;
}

int StudentAddres::GetHouseNumber()
{
	return house_number;
}

string StudentAddres::GetKorpus()
{
	return korpus;
}

void StudentAddres::SetCountry(string country)
{
	this->country = country;
}

void StudentAddres::SetRegion(string region)
{
	this->region = region;
}

void StudentAddres::SetCity(string city)
{
	this->city = city;
}

void StudentAddres::SetStreet(string street)
{
	this->street = street;
}

void StudentAddres::SetHouseNumber(int house_number)
{
	this->house_number = house_number;
}

void StudentAddres::SetKorpus(string korpus)
{
	this->korpus = korpus;
}

int StartDate::GetStartDay()
{
	return start_day;
}

int StartDate::GetStartMonth()
{
	return start_month;
}

int StartDate::GetStartYear()
{
	return start_year;
}

void StartDate::SetStartDay(int start_day)
{
	this->start_day = start_day;
}

void StartDate::SetStartMonth(int start_month)
{
	this->start_month = start_month;
}

void StartDate::SetStartYear(int start_year)
{
	this->start_year = start_year;
}

void Manager::SetGroupName(Group& group, string newgroupname)
{
	group.group_name = newgroupname;
}

void Manager::SetSpecialization(Group& group, string specialization)
{
	group.specialization = specialization;
}

string Group::GetGroupName()
{
	return group_name;
}

string Group::GetSpecialization()
{
	return specialization;
}

int Kurs::GetKurs()
{
	return kurs;
}

void Kurs::SetKurs(int kurs)
{
	this->kurs = kurs;
}
