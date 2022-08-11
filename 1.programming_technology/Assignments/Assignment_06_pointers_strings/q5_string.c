#include<stdio.h>

// Length of the array
int str_length(char* name)
{
	int len = 0;
	int i = 0;
	while(name[i] != '\0')
	{
		len++;
		i++;
	}
	
	return len;
}

// Comparision of 2 string
int str_cmp(char* name, char* other)
{
	int i = 0;
	while(name[i] != '\0')
	{
		if(name[i] != other[i])
		{
			break;
		}
		i++;	
	}

	if(name[i] == '\0' && other[i] == '\0')
		return 1;// true
	return 0;// false
}

// concatinating two arrays
int str_concat(char* name, char* other, char* concatination)
{
	int j=0;
	for(int i=0; name[i] != '\0'; ++i){
		concatination[j] = name[i];
		j++;
	}
	for(int i=0; other[i] != '\0'; ++i){
		concatination[j] = other[i];
		j++;
	}
	concatination[j] = '\0';
}
		
// Reversing in memory
void rev(char* con, int l)
{
	int a = 0, b = l-1;
	while(a < b) 
	{
		char temp = *(con+a);
		*(con+a) = *(con+b);
		*(con+b) = temp;
		a++;
		b--;
	}
}

// Finding 1st occurance
int first_occurance(char* c, char ch)
{
	int i = 0, pos = -1;
	while(c[i] != '\0')
	{
		if(c[i] == ch)
		{
			pos = i;
			break;
		}
		i++;
	}
	
	return pos;
}

// Finding Last Occurance
int last_occurance(char* c, char ch)
{
	int i = 0, pos = -1;
	while(c[i] != '\0')
	{
		if(c[i] == ch)
		{
			pos = i;
		}
		i++;
	}
	
	return pos;
}

// Count occurance
int count_occurance(char* c, char ch)
{
	int i = 0, count = 0;
	while(c[i] != '\0')
	{
		if(c[i] == ch)
		{
			count++;
		}
		i++;
	}
	return count;
}

// Sub string
int substring(char* c, char* sub)
{
	int i = 0, j = 0;
	while(c[i] != '\0')
	{
		if(c[i] == sub[j])
		{		
			while(c[i] != '\0' && sub[j] != '\0')
			{
				if(c[i] != sub[j])
					break;
				j++;
				i++;
			}
		}
		
		if(sub[j] == '\0')
			return 1;// true
		i++;
	}

	return 0;// false
}

int main()
{
	char name[100];
	char other[100];
	char concatination[100];
	char substr[50];
	int length, l;
	char ch;

	// Taking input from user	
	printf("1st name :");
	scanf("%s", name);
	printf("2nd name :");
	scanf("%s", other);

	// Length of name
	length = str_length(name);
	printf("Length : %d\n", length);

	// Comparing name & other
	int res = str_cmp(name, other);
	if(res == 0)	
		printf("StringMatch : false : %d\n", res);
	else
		printf("StringMatch : true : %d\n", res);

	// Adding 2 string
	str_concat(name, other, concatination);
	printf("Concatination : %s\n", concatination);

	// Reversing array
	l = str_length(concatination);
	rev(concatination, l);
	printf("Reverse : %s\n", concatination);
	rev(concatination, l);

	// First occurance
	printf("Character for 1st occurance : ");
	scanf("%c", &ch);
	scanf("%c", &ch);
	int occ = first_occurance(concatination, ch);
	printf("Character %c's 1st occurance @ [%d] index \n", ch, occ);

	// Last occurance
	printf("Character for last occurance : ");
	scanf("%c", &ch);
	scanf("%c", &ch);
	int locc = last_occurance(concatination, ch);
	printf("Character %c's last occurance @ [%d] index \n", ch, locc);

	// No. of occurance
	printf("Character for finding no. of occurance : ");
	scanf("%c", &ch);
	scanf("%c", &ch);
	int no = count_occurance(concatination, ch);
	printf("Character %c's no. of occurance : %d\n", ch, no);

	// Sub string
	printf("Substring : ");
	scanf("%s", substr);
	int ss = substring(concatination, substr); 
	if(ss == 0)	
		printf("SubstringMatch : false : %d\n", ss);
	else
		printf("SubstringMatch : true : %d\n", ss);	

	return 0;
}
