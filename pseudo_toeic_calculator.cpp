#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// vector<int> MODEL() {
//     vector<int> model;
//     return model;
// }

// class Student {
// public:
//     vector<int> setAnswer(){

//     }
// private:
//     vector<int> answer; // student's answer
// };

int main() {
    // vector<int> model;  // model answer
    // Student s1;

    ifstream answerFile("answer.txt");
    if (!answerFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // vector<int> model;
    // int num;
    // while (!answerFile.eof()) {
    //     model.push_back(num);
    // }

    // answerFile.close();

    // for (int i = 0; i < model.size(); i++) {
    //     cout << model[i] << endl;
    // }

    return 0;
}