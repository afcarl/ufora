/*
Cephes Math Library Release 2.3:  December, 1988
Copyright 1984, 1987, 1988 by Stephen L. Moshier
Direct inquiries to 30 Frost Street, Cambridge, MA 02140
*/

#pragma once

namespace cephes {

double polevl(double x, const double *coef, int N);
double p1evl(double x, const double *coef, int N);

}
