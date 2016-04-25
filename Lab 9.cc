#include <iostream>
#include <string>
using namespace std;

void outputOne(string studentNames[], int studentScores[], int index)
{
        cout <<"Student #:" << index << ": Name- " << studentNames[index-1] << " Score-" << studentScores[index-1] << endl;
}

void outputAll(string studentNames[], int studentScores[], int arraySize)
{
        //cout << "outputAll() arraySize == " << arraySize <<endl;
        for(int i=0; i<arraySize; i++)
        {
                outputOne(studentNames, studentScores, i+1);
        }
}

int getAverage(int studentScores[], int arraySize)
{
        int sum=0;
        for (int i=0; i<arraySize; i++)
}

void updateScore (string studentNames[], int studentScores[],int& scores, int index)
{
        studentScores[index-1] = scores;
        outputOne(studentNames, studentScores, index);
}

int main ()
{
        string names[5] = {"Abigail", "Bryce", "Cayli", "Doug", "Eric"};
        int scores[5] = {60,70,80,90,100};
        int operation, index;
        bool running = true;
  do{
                cout << "==Menu=="<< endl;
                cout << "1- Output single student's name and score"<< endl;
                cout << "2- Output all student's names and scores"<< endl;
                cout << "3- Output average score" << endl;
                cout << "4- Update student's info" << endl;
                cout << "Anything else- exit program" << endl;
                cout << "Please input menu item: ";
                cin >> operation;
                switch (operation)
                {
                        case 1:
                                cout << "Please input student #: ";
                                cin >> index;
                                if(index >=1 && index <= 5)
                                {
                                        outputOne(names, scores, index);
                                }
                                else
                                {
                                        cout << "Invalid index!" << endl;
                                }
                                break;

                                break;
                        case 2:
                                outputAll(names,scores, 5);
                                break;
                        case 3:
                                cout << "Average score = " << getAverage(scores, 5) << endl;
                        case 4:
                                cout << "Input # of student you wish to update: ";
                                cin >> index;
                                if (index >=1 && index <= 5)
                                {
                                        int newvalue;
                                        cout << "Input new score: ";
                                        cin >> newvalue;
                                        updateScore(names, scores, newvalue, index);
                                        cout << "Student's info is updated."<< endl;
                                        outputAll(names, scores, 5);
                                }
                                else
                                {
                                        cout << "Invalid index!" << endl;
                                }
                                break;
                        default:
                                running = false;
                                break;
                }
        }while(running);

        return 0;

-- INSERT --                                                                 89,1          Bot

