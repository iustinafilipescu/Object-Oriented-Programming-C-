#include<stdio.h>
#include"Map.h"
using namespace std;

int main()
{
    Map<int, const char*> m;
    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }


    /////main pt methods///
    printf("\n \n");

    Map<const char*, int> note;
    note.Set("MIHAI IONESCU", 10);
    note.Set("IUSTINA FILIPESCU", 10);
    note.Set("MIRUNA IOSUB", 5);
    note.Set("CHRISTIAN IOSUB", 2);

    for (auto [key, value, index] : note)
    {
        printf("Index:%d, Key=%s, Value=%d\n", index, key, value);
    }

    int x=0 ;
    cout<<"GET: "<<note.Get("MIHAI IONESCU", x)<<endl;
    cout << x<<endl;

    printf("Nr de elemente din map este: %d\n",note.Count());

    note.Clear();

    note.Set("CHRISTIAN IOSUB", 2);
    note.Set("MIHAI IONESCU", 10);
    printf("Nr de elemente din map este: %d\n", note.Count());

    note.Delete("MIHAI IONESCU");
    for (auto [key, value, index] : note)
    {
        printf("Index:%d, Key=%s, Value=%d\n", index, key, value);
    }


    Map<const char*, int> note2;
    note2.Set("CHRISTIAN IOSUB", 8);
    cout<<note.Includes(note2)<<endl;

    Map<const char*, int> note3;
    note3.Set("MIHAI IONESCU", 10);
    note3.Set("IUSTINA FILIPESCU", 10);
    note3.Set("MIRUNA IOSUB", 5);
    note3.Set("CHRISTIAN IOSUB", 2);
    cout << note.Includes(note3)<<endl;

    return 0;
}