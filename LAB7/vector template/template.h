
#include <cstdlib>


template<class T>
class tablou
{
public:
	tablou();
	~tablou();
	void Push( const T& item);
	T& Pop();
	void Delete( int pos);
	T& Get( int index);
	void Set(const T& value,  int index);
	void Insert(const T& val, int ind);
	 int Count();
	 void Sort(int (*cmpf)(const T& a, const  T& b) = nullptr);
	 int firstindexof(T element, int (*egal)(const T& e1, const T& e2) = nullptr);


	
	void print();
private:
	T* array=nullptr;
	 int size; // elemente
	 int realsize; // memorie alocata 

	 int intialsize = 2;
	 int multiplicator = 2; // multiplicator
};

//////////////////////////////////////////////////////////////////////

template<class T>
int tablou<T>::firstindexof(T element, int  (*egal)(const T& a, const T& b))
{

	if (egal == nullptr)
	{
		for (int i = 0; i < size; i++)
			if (array[i] == element)
				return i;
	}
	else
	{

		for (int i = 0; i < size; i++)
			if (egal(array[i], element))
				return i;
	}
}

template<class T>
void tablou<T>::Sort(int  (*cmpf) (const T& a , const T& b ))
{
	int temp;

	if ( cmpf == nullptr)
	{
		for (int i = 0; i < size - 1; i++)
			for (int j = i + 1; j < size; j++)
			{
				if ((array[i] > array[j]))
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
	}
	else
	{

		for (int i = 0; i < size - 1; i++)
			for (int j = i + 1; j < size; j++)
			{
				if (cmpf(array[i], array[j]))
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
	}
}

template<class T>
void tablou<T>::Insert(const T& val, int ind)
{
	size++;

	if (size > realsize)
	{
		realsize *= multiplicator;

		array = (T*)realloc(array, sizeof(T) * realsize);


	}


	for (int i = size; i >= ind; i--)
		array[i] = array[i - 1];

	array[ind] = val;
}

template<class T>
void tablou<T>::Set(const T& value,  int index)
{
	if(index<=size)
	array[index] = value;
}

template<class T>
T& tablou<T>::Pop()
{
	return array[size - 1];
}

template<class T>
void tablou<T>::print()
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << " ";
	std::cout <<"\n";
}

template <class T>
tablou<T>::tablou()
{
	realsize = intialsize; 
	size = 0;
	array = (T*)malloc(realsize * sizeof(T));

}

template <class T>
tablou<T>::~tablou()
{
	if (array)
	{
		free(array);
		array = NULL;
	}
}

template <class T>
 int tablou<T>::Count()
{
	return size; 
}

template <class T>
void tablou<T>::Delete( int pos)
{
	for (unsigned int i = pos; i < size - 1; i++)
		array[i] = array[i + 1];
	size--;
}

template <class T>
void tablou<T>::Push(const T& item)
{
	size++;

	if (size > realsize)
	{
		realsize *= multiplicator;

		array = (T*)realloc(array, sizeof(T) * realsize);


	}

	array[size - 1] = item;
}

template <class T>
T& tablou<T>::Get( int index)
{
	return array[index]; 
}



