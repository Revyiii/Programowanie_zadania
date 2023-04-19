// compile with gcc solutions.c -lm or equivalent
#include <math.h>

// Auxiliary functions
double smaller(double x, double y) {
    if(x < y)
        return 1;
    else
        return 0;
}

double greater(double x, double y) {
    if(x > y)
        return 1;
    else
        return 0;
}

double equal(double x, double y) {
    if(x == y)
        return 1;
    else
        return 0;
}

double different(double x, double y) {
    if(x != y)
        return 1;
    else
        return 0;
}

double logical_or(double x, double y) {
    if(x > 0 || y > 0)
        return 1;
    else
        return 0;
}

double logical_and(double x, double y) {
    if(x > 0 && y > 0)
        return 1;
    else
        return 0;
}

double sign(double x) {
    if(x > 0)
        return 1;
    else if(x == 0)
        return 0;
    else
        return -1;
}

double max(double x, double y) {
    if(x < y)
        return y;
    else
        return x;
}

double min(double x, double y) {
    if(x > y)
        return y;
    else
        return x;
}

// Your formulas:

// Error = 24.5266
double solution_1(double x) {
    return 33.3333334584413;
}

// Error = 22.4335
double solution_6(double x) {
    return 40.58732644658819-(50.3302053824768/x);
}

// Error = 11.1946
double solution_7(double x) {
    return 0.3189896382288184*(26.31799631000002-x)*x;
}

// Error = 8.28754
double solution_9(double x) {
    return (0.4262954719505938*x-0.944725033983234)*(25.78387558685551-x);
}

// Error = 3.57013
double solution_10(double x) {
    return 75.2747240066042-abs((-6.221001047033218)*(-14.03140310109879+x));
}

// Error = 2.04994
double solution_12(double x) {
    return pow(1.826690643302279,(1.010252666235023-0.03580142237941684*x)*x);
}

// Error = 1.07649
double solution_13(double x) {
    return 33.57975257822901*(1.072900768552119+cos(0.2532383416497169*x-3.545336611340741));
}

// Error = 0.961569
double solution_14(double x) {
    return pow(1.735526771008024,(1.009707816217417-0.03495443647465914*x)*(0.8862490957524775+x));
}

// Error = 0.544312
double solution_16(double x) {
    return pow(75.98507968330506,cos(0.08951284582150516*x-1.253218325640045))-4.916193670224095;
}

// Error = 0.483112
double solution_18(double x) {
    return pow(70.51700288021857,cos(sinh(0.089144662655478*x-1.248023206907645)));
}

// Error = 0.473408
double solution_20(double x) {
    return pow(70.76117021347378,cos(sinh(0.08867989771091689*x-1.241512782001505)))-0.3023259854926453;
}

// Error = 0.327984
double solution_21(double x) {
    return pow(75.93018438522344-sin(x),cos(0.08967684968954348*x-1.255494948641251))-4.829025650910661;
}

// Error = 0.199189
double solution_24(double x) {
    return pow(75.84257999985917-sin(-0.7870252093267389*x),cos(0.09010426029494073*x-1.261449157540162))-4.631057749343442;
}

// Error = 0.144598
double solution_26(double x) {
    return pow(75.8487428673568+(-1.345708017204622*sin(-0.7868667072651653*x)),cos(0.09016436793032137*x-1.26227761641036))-4.613191251406362;
}

// Error = 0
double solution_27(double x) {
    return round(pow(75.8531449813007-cos(-0.8966041105625757*x),cos(0.09036418074647455*x-1.265337152135309))-4.431368452144352);
}

// Main function. Place your calculations here
int main(int argc, char* argv[]) {
    return 0;
}
