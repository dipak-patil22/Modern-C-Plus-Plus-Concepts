
#include <iostream>
#include <string>
using namespace std;

int main()
{

	char a = 'b';			//single qoutes
	cout << a << endl;

	string str = "Hello";		//Double qouate
	string str1 = "World";
	cout << str + str1;		//concanates with +


	//string str;
	//string str1;
	//cin >> str;		//cin works normally for strings
	//cin >> str1;
	//cout << str << " " << str1 << endl;

	////strings can take word and if encounters space or breakline then it breaks
	//// We can not take complete line "Hello World" in one string using cin
	

	////We use getline() to get complete line in a string
	//string str;
	//cout << "Enter Input Lines" << endl;
	//getline(cin, str);		//takes complete line input from console
	//cout << str << endl;



	//string str;
	//cout<< "Enter string: " ;
	//getline(cin, str);		
	//
	//for (int i = 0; i < str.size(); i++)	//size() function returns size of string
	//{
	//	cout << str[i] << endl;		//Can access each char with index
	//}



	//int noLines;
	//cout << "Enter number of lines: ";
	//cin >> noLines;
	//cout << endl<< "Enter lines" << endl;

	//while (noLines--)				
	//{
	//	string s;
	//	getline(cin, s);
	//	cout << s << endl;
	//}

	////Reversing the string
	//string str;
	//cout<< "Enter string: " ;
	//getline(cin, str);		

	//string str_rev;
	//
	//for (int i = str.size()-1; i >=0 ; i--)
	//{
	//	//str_rev = str_rev + str[i];		//This will work but we should avoid this
	//										//As here we are adding char to string and this is not right

	//	str_rev.push_back(str[i]);
	//}
	//cout << str_rev;



	////Is Palindrome
	//string str;
	//cout<< "Enter string: " ;
	//getline(cin, str);		

	//string str_rev;
	//
	//for (int i = str.size()-1; i >=0 ; i--)
	//	str_rev.push_back(str[i]);

	//if (str == str_rev)			//We can directly compare the strings with ==
	//	cout << "Palindrome" << endl;
	//else
	//	cout << "Not Palindrome" << endl;



	////For big numbers we can take that number in string form and 
	////then can perform operation on that number by extracting it 

	//string s;
	//cout << "Enter Number: ";
	//cin >> s;

	//int last_digit = s[s.size() - 1] - '0';
	//cout << last_digit << endl;



	return 0;
}

