#include "header.h"

int main(void)
{
    double age1 = 0.0, age2 = 0.0, age3 = 0.0, age4 = 0.0, age5 = 0.0, agemean = 0.0, agesum = 0.0;
    double Gpa1 = 0.0, Gpa2 = 0.0, Gpa3 = 0.0, Gpa4 = 0.0, Gpa5 = 0.0;
    double Gpasum = 0.0, Gpamean = 0.0, Gpasd = 0.0, Gpamin = 0.0, Gpamax = 0.0;
    double Gpadev1 = 0.0, Gpadev2 = 0.0, Gpadev3 = 0.0, Gpadev4 = 0.0, Gpadev5 = 0.0, Gpavar = 0.0;
    int cstd1 = 0, cstd2 = 0, cstd3 = 0, cstd4 = 0, cstd5 = 0, cstdsum = 0, cstdmean = 0;
       
    FILE* infile = NULL, * outfile = NULL;

    infile = fopen("input.dat", "r");
    outfile = fopen("output.dat", "w");

    read_integer(infile);
    Gpa1 = read_double(infile); 
    cstd1 = read_integer(infile);
    age1 = read_double(infile);

    read_integer(infile);
    Gpa2 = read_double(infile);
    cstd2 = read_integer(infile);
    age2 = read_double(infile);

    read_integer(infile);
    Gpa3 = read_double(infile);
    cstd3 = read_integer(infile);
    age3 = read_double(infile);

    read_integer(infile);
    Gpa4 = read_double(infile);
    cstd4 = read_integer(infile);
    age4 = read_double(infile);

    read_integer(infile);
    Gpa5 = read_double(infile);
    cstd5 = read_integer(infile);
    age5 = read_double(infile);

    Gpasum = calculate_sum(Gpa1, Gpa2, Gpa3, Gpa4, Gpa5);
    cstdsum = calculate_sum(cstd1, cstd2, cstd3, cstd4, cstd5);
    agesum = calculate_sum(age1, age2, age3, age4, age5);

    Gpamean = calculate_mean(Gpasum, 5);
    cstdmean = calculate_mean(cstdsum, 5);
    agemean = calculate_mean(agesum, 5);

    Gpadev1 = calculate_deviation(Gpa1, Gpamean);
    Gpadev2 = calculate_deviation(Gpa2, Gpamean);
    Gpadev3 = calculate_deviation(Gpa3, Gpamean);
    Gpadev4 = calculate_deviation(Gpa4, Gpamean);
    Gpadev5 = calculate_deviation(Gpa5, Gpamean);
    Gpavar = calculate_variance(Gpadev1, Gpadev2, Gpadev3, Gpadev4, Gpadev5, 5);
    Gpasd = calculate_sd(Gpavar);


    Gpamax = find_max(Gpa1, Gpa2, Gpa3, Gpa4, Gpa5);
    Gpamin = find_min(Gpa1, Gpa2, Gpa3, Gpa4, Gpa5);

    print_double(outfile, Gpamean);
    print_double(outfile, cstdmean);
    print_double(outfile, agemean);
    print_double(outfile, Gpasd);
    print_double(outfile, Gpamin);
    print_double(outfile, Gpamax);


    fclose(infile);
    fclose(outfile);

    return 0;

}