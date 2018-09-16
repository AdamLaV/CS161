//average function
double average(const int scores[], int size) {
    double average = 0.0;
    for (int i = 0; i < size; i++)
    {
        average += scores[i];
    }

    return average / size;
}

// standard deviation function
double standardDeviation(const int scores[], int size, double mean) {
    double roundedStandardDev = 0.0, sqrtStandardDev = 0.0;
    for (int i = 0; i < size; ++i)
    {
        roundedStandardDev += pow(scores[i] - mean, 2);
        sqrtStandardDev = sqrt(roundedStandardDev / 10);
    }

    return sqrtStandardDev;
}

// getLetterGrade function
char getLetterGrade(const int score, double mean, double stdDev) {
    char grade;

    // below average students
    double stdDivid = (mean - score);
    if(score < mean) {
        //stdDivid = (mean - score);
        if(stdDivid / stdDev >= 1.0) {
            grade = 'F';
        }
        else if(stdDivid / stdDev >= 0.5) {
            grade = 'D';
        }
        else {
            grade = 'C';
        }
    }
    if(score > mean) {
        grade = 'B';
    }
    return grade;
    //mean = mean * stdDev + score;

}
