void outputOne(string studentNames[], int studentScores[], int index)
{
        cout <<"Student #:" << index << ": Name- " << studentNames[index-1] << " Score-" << studentScores[index-1] << endl;
}
void outputAll(string studentNames[], int studentScores[], int arraySize)
{
        for(int i=0; i<arraySize; i++)
        {
                outputOne(studentNames, studentScores,i);
        }
}
int getAverage(int studentScores[], int arraySize)
{
        int sum=0;
        for (int i=0; i<arraySize; i++)
        {
                sum =+ studentScores[i];
        }
        int avg = sum / arraySize;
        return avg;
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
                cout << "Anything else- exit program" << endl;
                cout << "Please input menu item: ";
                cin >> operation;
                switch (operation)
                {
                        case 1:
                                cout << "Please input student #: ";
                                cin >> index;
                                if(index >=1 && index <= 5)
"Lab9.cc" 70L, 1529C                                          46,16-44      14%
