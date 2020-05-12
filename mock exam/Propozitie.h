#pragma once
#include<vector>
#include<string>
#include<cstring>
using namespace std;
class Propozitie
{
    char* txt;
    vector<string> v;
public:
    Propozitie()
    {
        txt = nullptr;
        v.clear();
    }
    ~Propozitie()
    {
        v.clear();
       memset(txt, 0, sizeof(txt));
    }
    Propozitie(const char* txt1)
    {
        txt = new char[(strlen(txt1))];
        strcpy(txt, txt1);
       Create(txt);
    }
    void Create(const char* txt)
    {

        string str;
        for (int i = 0; i < strlen(txt); i++)
        {
            if (txt[i] != ' ')
                str = str + txt[i];
            if (i == strlen(txt) - 1)
                v.push_back(str);

            if (txt[i] == ' ')
            {
                v.push_back(str);
                str.clear();


            }


        }
        // for (int i = 0; i < v.size(); i++)
           //  cout << v[i] << " ";
    }
    string operator[](int  index)
    {
        return v[index];
    }
    int GetNumberOfWords()
    {
        return v.size();
    }
    bool Contains(const char* word, bool ignoreCase)
    {
        string str;
        for (int i = 0; i < strlen(word); i++)
        {
            char c = tolower(word[i]);
            str = str + c;
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == str)
                return true;
        }
        return false;
    }

    operator char* ()
    {
        return txt;
    }

    vector<string>::iterator begin()
    {
        return v.begin();
    }
    vector<string>::iterator end()
    {
        return v.end();
    }

 
};
