#include "header.h"

double read_double(FILE* infile)
{
    double num;
    fscanf(infile, "%lf", &num);
    return num;
}

int read_integer(FILE* infile)
{
    int num;
    fscanf(infile, "%d\n", &num);
    return num;
}

double calculate_sum(double num1, double num2, double num3, double num4, double num5)
{
    double sum = 0.0;
    sum = num1 + num2 + num3 + num4 + num5;
    return sum;
}

double calculate_mean(double sum, int number)
{
    double mean = 0.0;
    mean = sum / number;
    return mean;
}

double calculate_deviation(double number, double mean)
{
    double deviation = 0.0;
    deviation = number - mean;
    return deviation;
}

double calculate_variance(double dev1, double dev2, double dev3, double dev4, double dev5, int number)
{
    double variance = 0.0;
    variance = (pow(dev1, 2) + pow(dev2, 2) + pow(dev3, 2) + pow(dev4, 2) + pow(dev5, 2)) / number;
    return variance;
}

double calculate_sd(double variance)
{
    double sd = 0.0;
    sd = sqrt(variance);
    return sd;
}

double find_max(double num1, double num2, double num3, double num4, double num5)
{
    double max = 0.0;

    max = num1;

    if (num2 > max)

    {
        max = num2;
    }

    else if (num3 > max)

    {
        max = num3;
    }

    else if (num4 > max)

    {
        max = num4; 
    }
    else if (num5 > max)

    {
        max = num5;
    }

    return max;
}

double find_min(double num1, double num2, double num3, double num4, double num5)
{
    double min = 0.0;

    min = num1;

    if (num2 < min)

    {
        min = num2;
    }

    else if (num3 < min)

    {
        min = num3;
    }

    else if (num4 > min)

    {
        min = num4;
    }
    else if (num5 < min)

    {
        min = num5;
    }

    return min;
}

void print_double(FILE* outfile, double number)
{
    fprintf(outfile, "%.2f\n", number);
}