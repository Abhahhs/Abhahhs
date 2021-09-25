
Strings In C++ With Examples
Last Updated:August 27, 2021

An Intensive Look At The Basics Of Strings In C++.

In this C++ series, until now, we have mostly discussed numeric arrays in C++. In this tutorial, we will discuss the manipulation with character arrays which we simply call “Strings”.

Character array is mostly a C-style string that C++ supports. In addition to C-style character arrays, C++ also supports a string class “std:: string”. Further, in this tutorial, we will discuss both the types of strings as well as the difference between them and about programming each type in C++.

=> Watch Out The Complete List Of C++ Tutorials In This Series.

Strings in C++

What You Will Learn: [hide]

    Character Arrays (C-style strings)
    String Class In C++
    Conclusion
    Recommended Reading

Character Arrays (C-style strings)

The c-style string is a character array terminated with a null character “\0”. Hence we can define an array of type char and the dimensions or size of the arrays and then we can initialize it to a string or array of characters.

Note that it’s the compiler that terminates a string with a null character, so if we initialize the character array with a string (in the double quote “”) then we need to leave extra space for the null character while declaring the size of an array.

Let’s take some Examples of declaring and initializing character arrays.

char firstStr[] = "This is Cstyle string";
char secStr[100] = {'s','o','f','t','w','a','r','e',' ','t','e','s','t','i','n','g',' ','h','e','l','p','\0'};
char thirdStr[] = {'h','e','l','l','o','\0'};

All the above definitions are valid C-style string definitions in C++. Note that we can either declare the actual size or we can leave the size blank so that the compiler can accommodate the size depending on the string that we initialized.

Let’s take up an Example of reading and writing character array in C++

Given below is a simple program that reads the string using cin and outputs it using cout.
#include <iostream>
#include <string>
using namespace std;
int main()
{
  char firstStr[100];
  cin>>firstStr;
  cout<<"you entered : "<<firstStr;
}

Output 1:

SoftwareTestingHelp.com
you entered: SoftwareTestingHelp.com

Output 2:

This is C-style string
you entered: This

If we compare both the output, we see that when we entered the first string “SoftwareTestingHelp.com”, it was printed as it is.

But in the second output, though we entered the string as “This is C-style string”, the output was only “This”.

The difference in output is because, ‘>>’ operator of cin that is used to read the string is treated as ‘scanf’ function of C, which reads only till the space encountered. Hence ‘cin with >>’ is suitable to read character arrays without space.

Hence while the second output space was encountered, the cin function took it as the end of the string and read only the first word.

In order to read an entire line of characters including the spaces, C++ uses the “get’ function.

An Example program using the get function is shown below:
#include <iostream>
#include <string>
using namespace std;
int main()
{
  char firstStr[100];
  cin.get(firstStr,100);
  cout<<"you entered : "<<firstStr;
}

Output:

This is softwareTestinghelp.com
you entered: This is softwareTestinghelp.com

As shown in the example, the get function of cin uses two arguments. The first argument is the character array variable in which the string is to be read while the second argument is the maximum size of the array.

C-style strings also support numerous string functions which allow the users to manipulate the strings. These functions are defined in the header “cstring”.

We present a table below which lists various string functions that can be used to manipulate C-style strings.
No	Function	Arguments	Description
1	strcpy	s1, s2	Copies string s2 into string s1
2	strcat	s1,s2	Appends or concatenates string s2 to the end of string s1
3	strlen	s1	Returns length of string s1
4	strcmp	s1,s2	Returns 0: s1 and s2 are same
<0:s1 >0:s1>s2
5	strchr	s1,ch	Returns a pointer to first occurrence of character ch in string s1and the string from there onwards
6	strstr	s1,s2	Returns first occurrence of string s2 in string s1

The following program shows the usage of some of these functions in C++:
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char firstStr[50] = "This is softwareTestingHelp.com";
  char secStr[50] = "a testing platform";
  &nbsp;
  int len = strlen(firstStr);
  cout<<"Length of firstStr : "<<len;
  strcpy(secStr,"softwareTesting");
  cout<<"\nResultant string (secStr):"<<secStr;
  cout<<"\nComparing firstStr and secStr :"<<strcmp(firstStr,secStr);
  strcat(secStr," for you");
  cout<<"\nConcatenated secStr: "<<secStr;
  cout<<"\nFirst occurence of i in firststr at:"<<strchr(firstStr,'T');
  return 0;
}

Output:

Length of firstStr: 31
Resultant string (secStr):softwareTesting
Comparing firstStr and secStr :-31
Concatenated secStr: softwareTesting for you
First occurrence of i in firststr at: s is softwareTestingHelp.com
String Class In C++

String in C++ that is defined by the class “std::string” is a representation of the stream of characters into an object. In other words, String class is a collection of string objects. This string class is a part of the std namespace and is defined in the header “string.h”.

Let’s discuss some of the basic differences between string class and character array.

    While the character arrays we discussed above are statically allocated during compile time, strings are objects and hence can be dynamically allocated.
    As character arrays are static in nature, they cannot be shrunk or expanded once defined. Hence if we have a character array of size 100, and I initialized it to the word “Hello”, then the remaining space is wasted.

Char mystr[100] = “Hello”;

Here, the remaining 95 locations are wasted.

Contrary to this, string objects are dynamic in nature and will take up the exact space for the value.

    Character arrays are faster in performance whereas strings are slower.
    Character arrays have few functions operating on them which can manipulate them. String class has got numerous functions including the iterator functions.

These are some of the basic differences between the character array and string object class.

Next, we will see a few examples of string class along with some basic operations that are performed on objects of the string class.

An Example to declare and initialize the string class.
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str="This is string object in C++";
  cout<<"\nString entered is :"<<str;
  return 0;
}

In the above example, we have declared and initialized a string object using the “string” class. This is a simple example. Now let’s have a program to read the string from the user and also demonstrate few string functions including find the length and compare two strings.
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  string str;
  cout<<"Input the string\n";
  getline(cin,str);
  cout<<"\nString entered is :"<<str;
  int len = str.length();
  cout<<"\nLength of the string str is :"<<len;
  string str1 = "SoftwareTestingHelp";
  if(str.compare(str1) == 0)
    {
  cout<<"\nTwo strings are equal\n";
    }
  else
   {
  cout<<"\nTwo strings are not equal\n";}
  str1.append(".com");
  cout<<"\nNew str1 : "<<str1;
  str.clear();
  cout<<"\n\nstr new length : "<<str.length();
  return 0;
 
}
