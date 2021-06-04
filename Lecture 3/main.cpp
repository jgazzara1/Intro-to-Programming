//  Homework 3
//
//  Name: John Gazzara
//  I pledge my honor that I have abided by the Stevens Honor System - John Gazzara
//  This program runs on Mac

#include <iostream>
using namespace std;

int main()
{
    int homeworkScore1;
    int homeworkScore2;
    int homeworkScore3;
    int homeworkScore4;
    int homeworkScore5;
    int midtermScore1;
    int midtermScore2;
    int finalScore;
    int projectScore;
    float HWScore;
    float midScore;
    float cumulativeScore;
    
    //begin the dialogue
    cout << "Give me your first homework score: " << endl;
    cin >> homeworkScore1;
    
    cout << "Give me your second homework score: " << endl;
    cin >> homeworkScore2;
    
    cout << "Give me your third homework score: " << endl;
    cin >> homeworkScore3;
    
    cout << "Give me your fourth homework score: " << endl;
    cin >> homeworkScore4;
    
    cout << "Give me your fifth homework score: " << endl;
    cin >> homeworkScore5;
    
    cout << "How was your first midterm?" << endl;
    cin >> midtermScore1;
    
    cout << "How was your second midterm?" << endl;
    cin >> midtermScore2;
    
    cout << "The final, how was it?" << endl;
    cin >> finalScore;
    
    cout << "And I know you did all the work yourself, how was your project?" << endl;
    cin >> projectScore;

    //lets see how the person did based on all that info
    HWScore = ((homeworkScore1 + homeworkScore2 + homeworkScore3 + homeworkScore4 + homeworkScore5)/5);
    midScore = ((midtermScore1 + midtermScore2)/2);
    cumulativeScore = ((HWScore * .40) + (midScore * .30) + (finalScore * .10) + (projectScore * .20));
    
    //if cS > 90, then grade is A. If cs < 90 and cs > 80
    if (HWScore == 100 && midScore == 100)
    {
            cout << "You done diddily did perfect, you don't even need the final, you have an A" << endl;
    }
    else if (cumulativeScore > 90)
    {
            cout << "WOW! You got an A you nerd!" << endl;
    }
    else if (cumulativeScore > 80 && cumulativeScore <= 90)
    {
            cout << "Hey first is the worst, you got a B" << endl;
    }
    else if (cumulativeScore > 70 && cumulativeScore <= 80)
    {
            cout << "It's average, a C ain't bad man" << endl;
    }
    else
    {
        cout << "WTF? Did you drink all semester, and also remove your arms? Its a D" << endl;
    }
}
