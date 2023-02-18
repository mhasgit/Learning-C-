// Cpp program to redirect cout to a file
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	fstream file;
	file.open("cout.txt", ios::out);
	string line;

	// Backup streambuffers of cout
	streambuf* stream_buffer_cout = cout.rdbuf();
	streambuf* stream_buffer_cin = cin.rdbuf();

	// Get the streambuffer of the file
	streambuf* stream_buffer_file = file.rdbuf();

	// Redirect cout to file
	cout.rdbuf(stream_buffer_file);

	cout << "This line written to file" << endl;

	// Redirect cout back to screen
	cout.rdbuf(stream_buffer_cout);
	cout << "This line is written to screen" << endl;

	file.close();
	return 0;
}
