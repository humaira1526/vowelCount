#include <iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<iomanip>
#include<set>

using namespace std;

//Setting each of the vowels at value 0, which will change after opning the html file
int countA = 0;
int countE = 0;
int countI = 0;
int countO = 0;
int countU = 0;
int countB = 0;
int countC = 0;
int countD = 0;

//Defining variables for each vowel letters
set<char> A = { 'A', 'a' };
set<char> E = { 'E', 'e' };
set<char> I = { 'I', 'i' };
set<char> O = { 'O', 'o' };
set<char> U = { 'U', 'u' };
set<char> B = { 'B', 'b' };
set<char> C = { 'C', 'c' };
set<char> D = { 'D', 'd' };

int vowel = 0; //This variable will store total number of each vowels (A,E,I,O,U) and print out the total count
int consonants = 0; //This varibale will store totals of the 3 consonant (B,C,D) words and print it at the end.

char ch;
char stars = '*';
char spacing = ' ';
char dots = '.';

int main(int argc, char *argv[])
{

    fstream infile("Constitution_of_the_United_States.html"); //Opens the html file

    //Prints the command line at the top
    if (argc > 1)
    {
        std::cout << argv[0];//First arguement
        std::cout << argv[1] << "\n"; //Second arguement
    }
   
    
    //Prints the welcome message
    cout << setw(90) << setfill(stars) << stars << endl;
    cout << setw(30) << setfill(stars) << stars << "Welcome to my letter count program" << setw(26) << setfill(stars) << stars << endl;
    cout << setw(90) << setfill(stars) << stars << endl;
    cout << setw(90) << setfill(spacing) << spacing << endl;

    cout << "Analyzing file '" << argv[1] << "'..." << endl; //Prints out the name of the file being analyzed
    
    
    cout << setw(90) << setfill(spacing) << spacing << endl;

    while (infile >> ch) {


        if (find(A.begin(), A.end(), ch) != A.end()) //Searches for the letter A in the html file and stores it in the vowel variable
        {
            countA++; //Stores the total number of letter A
            vowel++;
        }
        else if (find(E.begin(), E.end(), ch) != E.end()) //Searches for the letter E in the html file and stores it in the vowel variable
        {
            countE++; //Stores the total number of letter E
            vowel++;
        }
        else if (find(I.begin(), I.end(), ch) != I.end()) //Searches for the letter I in the html file and stores it in the vowel variable
        {
            countI++; //Stores the total number of letter I
            vowel++;
        }
        else if (find(O.begin(), O.end(), ch) != O.end()) //Searches for the letter O in the html file and stores it in the vowel variable
        {
            countO++; //Stores the total number of letter O
            vowel++;
        }
        else if (find(U.begin(), U.end(), ch) != U.end()) //Searches for the letter U in the html file and stores it in the vowel variable
        {
            countU++; //Stores the total number of letter U
            vowel++;
        }
        else if (find(B.begin(), B.end(), ch) != B.end()) //Searches for the letter B in the html file and stores it in the consonants variable
        {
            countB++; //Stores the total number of letter B
            consonants++;
        }
        else if (find(C.begin(), C.end(), ch) != C.end()) //Searches for the letter C in the html file and stores it in the consonants variable
        {
            countC++; //Stores the total number of letter C
            consonants++;
        }
        else if (find(D.begin(), D.end(), ch) != D.end()) //Searches for the letter D in the html file and stores it in the consonants variable
        {
            countD++; //Stores the total number of letter D
            consonants++;
        }
        else if (!infile) //If it can't open the html file the code will break
        {
            cout << "Unable to open the file.";
            return 0;
        }

    }




    std::cout << "The number of A's: " << setw(60) << setfill(dots) << countA << endl; //Prints the total count of letter A
    std::cout << "The number of E's: " << setw(60) << setfill(dots) << countE << endl; //Prints the total count of letter E
    std::cout << "The number of I's: " << setw(60) << setfill(dots) << countI << endl; //Prints the total count of letter I
    std::cout << "The number of O's: " << setw(60) << setfill(dots) << countO << endl; //Prints the total count of letter O
    std::cout << "The number of U's: " << setw(59) << setfill(dots) << countU << endl; //Prints the total count of letter U
    std::cout << "The number of B's: " << setw(59) << setfill(dots) << countB << endl; //Prints the total count of letter B
    std::cout << "The number of C's: " << setw(59) << setfill(dots) << countC << endl; //Prints the total count of letter C
    std::cout << "The number of D's: " << setw(59) << setfill(dots) << countD << endl; //Prints the total count of letter D

    std::cout << "The vowel count is: " << setw(59) << setfill(dots) << vowel << endl;; //Prints the total number of vowels in the html file
    std::cout << "The consonant count is: " << setw(55) << setfill(dots) << consonants; //Prints the total number of consonants in the html file
   
	
    infile.close(); //Closes the html file
	return 0;
    
    
}


    
