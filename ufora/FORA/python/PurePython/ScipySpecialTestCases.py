#   Copyright 2016 Ufora Inc.
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.


import numpy
import scipy.special


class ScipySpecialTestCases(object):
    def test_beta(self):
        def f(a, b):
            return scipy.special.beta(a, b)

        a = 1.0
        b = 2.0
        self.assertTrue(
            numpy.isclose(
                f(a, b),
                self.evaluateWithExecutor(f, a, b)
                )
            )
        
    def test_gamma(self):
        def f(x):
            return scipy.special.gamma(x)

        for val in [-0.5, 0.5, 1.0]:
            self.assertTrue(
                numpy.isclose(
                    f(val),
                    self.evaluateWithExecutor(f, val)
                    )
                )