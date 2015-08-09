#include <cstdio>  
#include <cstring>  

const int MAX_STRING_LEN = 15;

bool readLine(char *str, char *substr)
{
	bool bEof = false;

	if (2 == fscanf(stdin, "%s %s", str, substr))
	{
		bEof = true;
	}

	return bEof;
}

void insert(char *str, char *substr)
{
	int i, maxIdx;
	size_t size = strlen(str);

	// find the index of the maximum ascii code  
	maxIdx = 0;
	for (i = 1; i<size; ++i)
	{
		if (str[maxIdx] < str[i])
		{
			maxIdx = i;
		}
	}

	// shift right to make space   
	for (i = size; i>maxIdx; --i)
	{
		str[i + 3] = str[i];
	}

	// insert the substr  
	++i;
	str[i++] = substr[0];
	str[i++] = substr[1];
	str[i] = substr[2];
}

void print(char *str)
{
	printf("%s\n", str);
}

int main(void)
{
	char str[MAX_STRING_LEN] = { '\0' };
	char substr[MAX_STRING_LEN] = { '\0' };

	while (readLine(str, substr))
	{
		insert(str, substr);
		print(str);
	}

	return 0;
}
