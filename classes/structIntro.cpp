/// @author Adam Koehler
/// @date February 15, 2017
/// @brief Introduction to OOP with structs

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Exam
{
    int score;
    string username;
};
// don't forget the semicolon!

// output format is username: score
void display(const vector<Exam> &v)
{
    for (int i=0; i < v.size(); i++)
    {
        // cout << v.at(i) << endl;
        // cout << v.username.at(i) << ": " << v.score.at(i) << endl;
        // cout << Exam.username << ": " << Exam.score << endl;
        cout << v.at(i).username << ": " << v.at(i).score << endl;
    }
}

void readData(vector<Exam> &v, const string &s)
{
    ifstream ifs;

    // open file and make sure it opened
    ifs.open(s.c_str());
    if(!ifs.is_open())
    {
        cout << "ERROR: Failed to open input file." << endl;
        return;
    }
    
    // First we need a student
    Exam student;
    
    // loop through entire file gathering data and placing in Exam
    // while (ifs >> student.username >> student.score)
    while (!ifs.eof())
    {
        ifs >> student.username >> student.score;
        v.push_back(student);
    }
    
    // don't forget to close the file
    ifs.close();
}

int main(int argc, char *argv[])
{
    // verify proper number of command line arguments
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " inputFile" << endl;
        return 0;
    }
    
    Exam student1;
    // string username;
    // int examScore;
    
    // how to output?
    // what would be output?? the following doesn't work
    //cout << student1.score << endl; 
    
    // instead we output the items within the struct
    // cout << student1.score << ' ' << student1.username << endl;
    // What will be output by the above?
    
    // With structs, we usually just initialize all the items directly
    student1.score = 99;
    student1.username = "akoeh001";
    // cout << student1.score << ' ' << student1.username << endl;
    // What will be output by the above?
    
    // How can we move to store many exams?
    vector<Exam> midterm;
    
    // What type of values go into the vector?
    
    // Cannot do
    // midterm.push_back("help", 10);
    // midterm.push_back(student1);
    
    // so we need to initialize and set up an exam
    // Exam curExam;
    // examScore = 99;
    // username = "jpl103";
    // curExam.score = examScore;
    // curExam.username = username;
    // midterm.push_back(curExam);
    
    // TODO in groups, read in all the data and store into midterm
    readData(midterm, argv[1]);
    
    // display the vector
    display(midterm);

    return 0;
}