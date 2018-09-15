// avearge function
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
		sqrtStandardDev = sqrt(roundedStandardD / 10);
	}

	return sqrtStandardDev;
}

// getLetterGrade function
char getLetterGrade(const int score, double mean, double stdDev) {
	char greade;
	double stdDivid = (scroe / stdDev);

	// below average conditions
	if (score < mean)
	{
		if (stdDivid > 1)
		{
			greade = "F";
		}

		else if (stdDivid >= 0.5)
		{
			greade = "D";
		}

		else if (stdDivid < 0.5)
		{
			greade = "C";
		}
	}

	// above avearge conditions 
	else if (score > mean)
	{
		if (stdDivid > 0.5)
		{
			greade = "B";
		}

		else if (stdDivid > 1)
		{
			greade = "A";
		}
	}

	return grade;

}
