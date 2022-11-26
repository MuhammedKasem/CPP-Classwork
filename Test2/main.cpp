#include <iomanip>
#include <iostream>

using namespace std;
void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main() {
    double score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5= 0;

    cout << "This program will accept 5 scores and average " << endl;
    cout << "the 3 highest scores. " << endl << endl;

    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    calcScore(score1, score2, score3, score4, score5);

}

void getJudgeData(double &score) {
    cout << "\nEnter a contestant's score between 0 and 10: " << endl;
    cin >> score;

    while (score < 0 || score > 100) {
        cout << "Score must be between 0 and 10! Please re enter!";
        cin >> score;
    }
}

void calcScore(double score1, double score2, double score3, double score4, double score5) {
    double lowest, highest, sum, average;

    lowest = findLowest(score1, score2, score3, score4, score5);
    highest = findHighest(score1, score2, score3, score4, score5);

    sum = (score1 + score2 + score3 + score4 + score5) - (highest + lowest);
    average = sum / 3;

    cout << setprecision(2) << fixed;
    cout << "\nThe lowest and higest scores of " << lowest << " and " << highest << " have been dropped." << endl << endl;
    cout << "The average of the three highest scores is " << average;

};

double findLowest (double score1, double score2, double score3, double score4, double score5) {
    double lowestScore = score1;
    if (lowestScore > score2) {
        lowestScore = score2;
    }
    if (lowestScore > score3) {
        lowestScore = score3;
    }
    if (lowestScore > score4) {
        lowestScore = score4;
    }
    if (lowestScore > score5) {
        lowestScore = score5;
    }
    return lowestScore;
};

double findHighest (double score1, double score2, double score3, double score4, double score5) {
    double highestScore = score1;
    if (highestScore < score2) {
        highestScore = score2;
    }
    if (highestScore < score3) {
        highestScore = score3;
    }
    if (highestScore < score4) {
        highestScore = score4;
    }
    if (highestScore < score5) {
        highestScore = score5;
    }
    return highestScore;

};
