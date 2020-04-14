#pragma once
#include <iostream>

using namespace std;

/////tuple////////////
template<class K, class V>
struct DataEntry //tip de date cu care sa accesam  key, value, poz
{
    K key;
    V value;
    int index;
};

//////clasa iterator pentru begin si end/////////////////
template<class K, class V>
class Iterator {
    K* Keys;
    V* Values;
    int size;
    int pozitie;
public:
    Iterator(K* Keys, V* Values, int size, int pozitie) //constructor
    {
        this->Keys = Keys;
        this->Values = Values;
        this->size = size;
        this->pozitie = pozitie;
    }
    Iterator& operator++()
    {
        pozitie++;
        return *this; //returneaza un ob de tip Iterator
    }
    bool operator !=(const Iterator& op) //primeste un ob de tip Iterator
    {
        return this->pozitie != op.pozitie; //compara pozitiile
    }
    DataEntry<K, V> operator*()
    {
        DataEntry<K, V> DataEntry = { Keys[pozitie], Values[pozitie],pozitie }; //pt tuple 
        return DataEntry;
    }

};

///////template map///////////
template<class K, class V>
class Map {
public:
    K Keys[100];
    V Values[100];
    int size = 0;

    V& operator[] (K key)
    {
        for (int i = 0; i < size; i++)
        {
            if (Keys[i] == key)
                return Values[i];
        }
        size++;
        Keys[size - 1] = key;
        return Values[size - 1];
    }
    Iterator<K, V>begin()
    {
        Iterator<K, V>it(Keys, Values, size, 0); //i de la inceput va avea keys[poz] etc. pozitia este 0
        return it;
    }
    Iterator<K, V> end()
    {
        Iterator<K, V>it(Keys, Values, size, size); // i va avea la fel doar ca poz finala e size (size-1)
        return it;
    }

    //////METHODS////////////

    void Set(K key, V value)
    {
        for (int i = 0; i < size; i++)
        {
            if (Keys[i] == key)
            {
                Values[i] == value;
                return;
            }
        }
     
        size++;
        Keys[size - 1] = key;
        Values[size - 1] = value;
    }

    bool Get(const K& key, V& value)
    {
        for (int i = 0; i < size; i++)
        {
            if (Keys[i] == key)
            {
                value = Values[i];
                return true;
            }
        }
        return false;
    }

    int Count()
    {
        return size;
    }

    void Clear()
    {
        size = 0;
    }

    bool Delete(const K& key)
    {
        for (int i = 0; i < size; i++)
        {
            if (Keys[i] == key)
            {
                for (int j = i; j < size - 1; j++)
                {
                    Keys[j] = Keys[j + 1];
                    Values[j] = Values[j + 1];
                }
                size--;
                return true;
            }
        }
        return false;
    }


    bool Includes(const Map<K, V>& map)
    {
        for (int j = 0; j < map.size; j++)
        {
            bool found = false;
            for (int i = 0; i < size; i++)
            {
                if (this->Keys[i] == map.Keys[j])
                {
                    found = true;
                    break;
                }
            }
            if (!found)
                return false;
        }
        return true;
    }



};

