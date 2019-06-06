//Made by Ihor Paprotskyi, Group 1, NaUKMA, FI-2, SE
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef double(*const CFuncDouble)(const double&);
double sgn(const double& a);
double ariGeom(const double& a, const double& b);
double simpson (CFuncDouble f, const double& left, const double& right, const double& eps);

double elliptical_integral();
double elliptical_equals();
double dirichlet_integral();
double dirichlet_equals();
double poisson_integral();
double poisson_equals();
double euler_integral();

#endif