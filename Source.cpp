//*************************************************************
//	Description:	Final Exam
//	Author:			Anastasia Nadraga
//	Class:			COSC 1436.S02
//	Date:			May 2016
//*************************************************************
 
#include <iostream>
#include <string>
using namespace std;

int WordCount(string input);

int WordCount(string input)
{
	int NumWords = 1;
	
	for (int i = 0; i <= input.length(); i++)
		if (input[i] == ' ')
			NumWords++;
	return NumWords;
}

struct Name
{
	char First[21];
	char Middle[21];
	char Last[31];

};
bool CompareName(Name, Name);

bool CompareName(const Name& string1,const Name& string2)
{
	//Name string1;
	//Name string2;
	


}

int Median(int numbers[], char entries[]);

int Median(int numbers[], char entries[])
{
	int num = 0;
	for (int i = 0; i <= numbers[i]; i++)
		entries[num++];
	int median;

	median = (num + 1) / 2;

	return median;
}


struct Person
{
	char LastName	[31];
	char FirstName	[21];
	char DOB		[11];
	int  Children	[10];
	struct Spouse;
};

int GetLast(const int String[], int size, int Num);

int GetLast(const int String[], int size, int Num)
{
	int i;
	for (i = 0; i < size; i++)
		if (Num == String[i])
			return i;
		else
			return -1;
}

char *Rearrange(const char S1[], const char S2[], const char S3[]);

char *Rearrange(const char first[], const char middle[], const char last[])
{
	char *tName;

	tName = new char[strlen(first) + strlen(middle) + strlen(last) + 5];
	strcpy(tName, last);
	strcat(tName, " ");
	strcpy(tName, first);
	strcat(tName, " ");
	strcpy(tName, middle);
	return tName;
}

bool IsLeapYear(int Year);

bool IsLeapYear(int Year)
{
	if ((Year % 100) == 0)
		if ((Year % 400) == 0)
			return true;
		else
			return false;
	else
		if ((Year % 4) == 0)
			return true;
		else
			return false;
}	

bool Compare(const char Str1[], const char Str2[], const bool *ans);

bool Compare(const char Str1[], const char Str2[], const bool *ans)
{
	bool ans = true;

	if (tolower(Str1 == Str2))
		return ans;
	else
		return false;
}

int Divisors(int i, int a, int b, int c);
int Divisors(int i, int a, int b, int c)
{
	if (i % a, b, c)
		return 1, 10, 100;
	else
		return 0;
}
