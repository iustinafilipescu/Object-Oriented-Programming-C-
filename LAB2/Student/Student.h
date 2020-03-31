#pragma once
class Student
{
private:
	float mate, engleza, istorie, medie;
	char nume[50];
public:
	void SetNume(const char* n);
	char* GetNume();
	void SetMate(float n);
	float GetMate();
	void SetIstorie(float n);
	float GetIstorie();
	void SetEngleza(float n);
	float GetEngleza();
	float Medie();

};
