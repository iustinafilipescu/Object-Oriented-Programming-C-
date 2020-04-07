#include <string>
#include <iostream>
#include<fstream>
#include <algorithm>
#include<map>
#include<queue>

using namespace std;

map<string, int> Split(string fraza, string delim, map<string, int> splitfraza)
{
	size_t found, token = 0;

	transform(fraza.begin(), fraza.end(), fraza.begin(), tolower); //transforma in litere mici

	found = fraza.find_first_of(delim);

	while (found != string::npos) //find first of returneaza npos cand nu gaseste
	{

		string lower = fraza.substr(token, found - token);


		int count = 0;
		size_t fc, poss = 0;
		fc = fraza.find(lower);
		while (fc != string::npos)
		{

			if (fraza.compare(fc + lower.size(), 1, " ") == 0)
				count++;

			if (fraza.compare(fc + lower.size(), 1, ".") == 0)
				count++;

			if (fraza.compare(fc + lower.size(), 1, ",") == 0)
				count++;

			if (fraza.compare(fc + lower.size(), 1, "!") == 0)
				count++;

			if (fraza.compare(fc + lower.size(), 1, "?") == 0)
				count++;
			poss = fc + 1;
			fc = fraza.find(lower, poss);

		}

		splitfraza.insert(pair<string, int>(lower, count));
		token = found + 1;
		found = fraza.find_first_of(delim, token);
	}

	int count = 0;
	size_t fc = 1, poss = 0;
	fc = fraza.find(fraza.substr(token, found - token));
	while (fc != string::npos)
	{
		count++;
		poss = fc + 1;
		fc = fraza.find(fraza.substr(token, found - token), poss);
	}
	splitfraza.insert(pair<string, int>(fraza.substr(token, found - token), count));

	splitfraza.erase(splitfraza.begin());

	return splitfraza;
}

struct Compare {
	bool operator()(pair<string, int> const& a, pair<string, int> const& b) const
	{
		return a.second < b.second || (a.second == b.second && a.first > b.first);
	}
};




int main()
{



	map<string, int> splitfraza;
	string fraza;

	ifstream infile;

	infile.open("phrase.txt");
	while (!infile.eof()) //pana se termina fisierul
	{
		getline(infile, fraza); 
		cout << fraza;
	}
	cout << '\n';
	infile.close();

	splitfraza = Split(fraza, " ,?!.", splitfraza);

	map<string, int>::iterator it;

	for (it = splitfraza.begin(); it != splitfraza.end(); it++)
		cout << it->first <<"\t"<< it->second<<endl;

	cout << endl; 

	priority_queue<pair<string, int>, vector<pair<string, int> >, Compare> pq;


	for (it = splitfraza.begin(); it != splitfraza.end(); it++)
		pq.push(make_pair(it->first, it->second));

	while (pq.empty() == false)
	{
		pair<string, int> top = pq.top();
		cout << top.first <<"\t"<<"=>" << top.second << endl;
		pq.pop();
	}


}