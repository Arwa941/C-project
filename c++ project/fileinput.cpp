#include<iostream>
#include<fstream>
using  namespace std;
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
/*void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    ifstream infile;
    ofstream outfile;
    int size=10;
    string names[size];
    infile.open("students names2.txt");
    outfile.open("read.txt");
    for(int i=0;i<size;i++)
    infile>>names[i];
bubbleSort(names,size);
for(int i=0;i<size;i++)
outfile<<names[i]<<endl;
infile.close();
outfile.close();

}*/
/*int main() {
     int SIZE = 10;
    string names[SIZE];
    ifstream inputFile("student_names.txt");
    for (int i = 0; i < SIZE; i++) {
        inputFile >> names[i];
    }
    inputFile.close();
    bubbleSort(names, SIZE);
    ofstream outputFile("sorted_names.txt");
    if (!outputFile) {
        cout << "Error: Unable to create output file." << endl;
        return 1;
    }
    for (int i = 0; i < SIZE; i++) {
        outputFile << names[i] << endl;
    }
    outputFile.close();
    return 0;
}*/
/*int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("highest degree.txt");
    outfile.open("best.txt");
    int total;
    int d1,d2,d3,d4,d5;
    string name,maxname;
    int temp;
    for(int i=0;i<5;i++)
    {
        infile>>d1>>d2>>d3>>d4>>d5;
        total=
    }

}*/
/*int main()
{
    string name;
    ifstream infile;   //ifstream infile 
    ofstream outfile;  //ofstream oufile
    infile.open("input.txt");    //infile.open("fhr.txt")
    outfile.open("output55.txt");  //outfile.open('ijh.txt)
    if(!infile)
        cout<<"Unable to open file";
    else 
    {
    cout<<"wow";
    infile>>name;
    outfile<<"your name"<<name;
    infile.close();
    outfile.close();
    }
}
*/


/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
ifstream inFile;
ofstream outFile;
double test1, test2, test3, test4, test5;
double average;
string firstName;
string lastName;
inFile.open("my_file.txt");
outFile.open("testavg.txt");
cout << "Processing data" << endl;
inFile >> firstName >> lastName;
outFile << "Student name: " << firstName << " " << lastName
<< endl;
inFile >>test1>>test2>>test3>>test4>>test5;
outFile << "Test scores:"<<test1 <<" "<< test2<< " "<<
test3<<" "<<test4<<" "<< test5<< endl;
average = (test1 + test2 + test3 + test4 + test5) / 5.0;
outFile << "Average test score: " << average << endl;
inFile.close();
outFile.close();
return 0;
}*/
/*#include <iostream>
#include <fstream>
using namespace std;
int main() {
fstream my_file;
my_file.open("my_file.txt");
if (!my_file) {
cout << "File not created!";
}
else {
cout << "File created successfully!";
my_file.close();
}
return 0;
}*/
/*#include <iostream>
#include <fstream>
using namespace std;
int main() {
fstream my_file;
my_file.open("my_file.txt");
if (!my_file) {
cout << "No such file";
}
else {
char ch;
while (1) {
my_file >> ch;
if (my_file.eof())
break;
cout << ch;
}
}
}*/


/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
     int SIZE = 10;
    string names[SIZE];
    ifstream inputFile("student_names.txt");
    for (int i = 0; i < SIZE; i++) {
        inputFile >> names[i];
    }
    inputFile.close();
    bubbleSort(names, SIZE);
    ofstream outputFile("sorted_names.txt");
    if (!outputFile) {
        cout << "Error: Unable to create output file." << endl;
        return 1;
    }
    for (int i = 0; i < SIZE; i++) {
        outputFile << names[i] << endl;
    }
    outputFile.close();
    return 0;
}*/

/*int main() {
    int students = 5;
    int subject = 4;
    
    ifstream inputFile("students_data.txt");
   // ofstream outputFile("students_total.txt");
    for (int i = 0; i < students; i++) {
        string name;
        int degree;
        int totalDegree = 0;

        inputFile >> name;

        cout << name << " ";

        for (int j = 0; j < subject; j++) {
            inputFile >> degree;
            totalDegree += degree;
            cout << degree << " ";
        }

        cout << "Total: " << totalDegree <<endl;
    }

    inputFile.close();
    //outputFile.close();
    return 0;
}*/
/*bool and1(bool x,bool y){
    return x*y;
}
bool or1(bool x,bool y){
    return x+y;
}
bool xor1(bool x,bool y){
    if(x==y) return 0;
    else return 1;
}
int main(){
      ifstream in("input_file.txt");
      string m; bool a,b;
      in>>m>>a>>b;
      if ( m=="and") cout<<and1(a,b);
      else if(m=="or") cout<<or1(a,b);
      else cout<<xor1(a,b);
in.close();  
}*/



