#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void clear();

int
main ()
{
    
    while (true)
    {
// Declare the variables you will use
  string Word_Input;
  string Word_Output = " ";
  char Letters;

// Ask the user to enter a word.

  cout << " Enter a letter: ";
  cin >> Word_Input;

  for (int i = 0; i < Word_Input.length (); i++)
    {
// characters must be processed one at a time
      Letters = Word_Input.at (i);

// Program will retrieve the appropriate ICAO word to match the character

      switch (Letters)
	{
	case 'A':
	case 'a':
	  Word_Output += "Alpha";
	  break;
	case 'B':
	case 'b':
	  Word_Output += "Bravo";
	  break;
	case 'C':
	case 'c':
	  Word_Output += "Charlie";
	  break;
	case 'D':
	case 'd':
	  Word_Output += "Delta";
	  break;
	case 'E':
	case 'e':
	  Word_Output += "Echo";
	  break;
	case 'F':
	case 'f':
	  Word_Output += "Foxtrot";
	  break;
	case 'G':
	case 'g':
	  Word_Output += "Golf";
	  break;
	case 'H':
	case 'h':
	  Word_Output += "Hotel";
	  break;
	case 'I':
	case 'i':
	  Word_Output += "India";
	  break;
	case 'J':
	case 'j':
	  Word_Output += "Juliet";
	  break;
	case 'K':
	case 'k':
	  Word_Output += "Kilo";
	  break;
	case 'L':
	case 'l':
	  Word_Output += "Lima";
	  break;
	case 'M':
	case 'm':
	  Word_Output += "Mike";
	  break;
	case 'N':
	case 'n':
	  Word_Output += "November";
	  break;
	case 'O':
	case 'o':
	  Word_Output += "Oscar";
	  break;
	case 'P':
	case 'p':
	  Word_Output += "Papa";
	  break;
	case 'Q':
	case 'q':
	  Word_Output += "Quebec";
	  break;
	case 'R':
	case 'r':
	  Word_Output += "Romeo";
	  break;
	case 'S':
	case 's':
	  Word_Output += "Sierra";
	  break;
	case 'T':
	case 't':
	  Word_Output += "Tango";
	  break;
	case 'U':
	case 'u':
	  Word_Output += "Uniform";
	  break;
	case 'W':
	case 'w':
	  Word_Output += "Whiskey";
	  break;
	case 'X':
	case 'x':
	  Word_Output += "X-ray ";
	  break;
	case 'Y':
	case 'y':
	  Word_Output += "Yankee";
	  break;
	case 'Z':
	case 'z':
	  Word_Output += "Zulu";
	  break;
	}
	}
    
// Display ICAO words
  cout << " Phonetic version is: " << Word_Output << endl;
}
  return 0;


}

void clear()
{
        #if defined(_WIN32)
                system("cls");   //On windows, do this
        #elif defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
                system("clear");//On Linux/OS X/BSDs
        #else                   //For an unrecognized OS, just print 50 newlines
                for (int i = 0; i < 50; ++i) std::cout << std::endl;
        #endif
}
