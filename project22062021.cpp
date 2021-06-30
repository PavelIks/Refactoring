#include <iostream>

bool isBigger(int then)
{
	/*bool isCorrect = false;
	if (then > 20)
		isCorrect = true;
	else
		isCorrect = false;
	return isCorrect;*/
	//				vs
	return then > 20;
}

bool* isInArray(int* arr, int size, int findNumber)
{
	/*if (arr[size - 1] == NULL)
		return false;*/
	/*for (int i = 0; i < size; i++)
	{
		if (arr[i] == findNumber) {
			return true;
		}
	}
	return false;*/

	//			vs
	bool* isFind = new bool(false);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == findNumber)
		{
			*isFind = true;
			break;
		}
	}
	return isFind;
}

// x and y bigger then zero
signed int sum(signed int x, signed int y)
{
	return x + y;
}

int main()
{
	int numbers[] = { 1, 2, 3, 4, 5, 6 };
	std::cout << isBigger(40) << "\n";
	std::cout << *isInArray(numbers,6, 4) << "\n";
	std::cout << sum(23, 321) << "\n";
}