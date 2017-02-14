//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/**
 * Exercise 9.4 in Software Engineering Textbook.
 * This is program is to extract a function findPostion from original function printFunction.
 */
#include <iostream>
using namespace std;

/**
 * function findPostion is to find the position of a given string in a given text
 * returns the position of the beginning of a given string in a given text.
 * @param text This is the array of given text
 * @param array_to_serach1 This is the array of given string
 * @param position1 This is an integer to save given string's position
 * @return int If the given string cannot be found in the given text return '-1'.
 * Otherwise, return the position of the beginning of given string in given text.
 */
int findPosition(const char text[], int text_length, const char array_to_search1[],
		int array_to_search1_length){

	int position1=-1;
		for (int i=0;i<text_length-array_to_search1_length+1;i++)
		{
			bool found=true;
			for (int j=0;j<array_to_search1_length;j++)
				if(text[i+j]!=array_to_search1[j])
					found =false;
			if (found){
				position1=i;
				break;
			}
		}
		return position1;
}

/**
 * printPostion is the function to print the position of given string in given text
 * @param text This is the array of given text
 * @param text_length This is the array length of given text
 * @param array_to_search1 This is the array of given string
 * @param array_to_search1_length This is the array length of given string
 * @see findPosition
 */
void printPosition()
{
	    char text[1024]="1234567890";
		int text_length = 10;
		char array_to_search1[4]="23";
		int array_to_search1_length=2;
		int position;
		position=findPosition(text, text_length, array_to_search1, array_to_search1_length);
		cout<<position;

}

int main() {

	printPosition();

	return 0;
}
