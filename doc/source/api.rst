
pyfora
======

.. automodule:: pyfora
.. autofunction:: pyfora.connect


Exceptions
----------
.. autoexception:: pyfora.PyforaError
.. autoexception:: pyfora.ConnectionError
.. autoexception:: pyfora.NotCallableError
.. autoexception:: pyfora.ComputationError
.. autoexception:: pyfora.PythonToForaConversionError
.. autoexception:: pyfora.ForaToPythonConversionError
.. autoexception:: pyfora.PyforaNotImplementedError
.. autoexception:: pyfora.InvalidPyforaOperation
.. autoexception:: pyfora.ResultExceededBytecountThreshold


Executor
--------
.. autoclass:: pyfora.Executor.Executor
    :members:


WithBlockExecutor
-----------------
.. autoclass:: pyfora.WithBlockExecutor.WithBlockExecutor
    :members:


RemotePythonObject
------------------
.. automodule:: pyfora.RemotePythonObject

.. autoclass:: pyfora.RemotePythonObject.RemotePythonObject
    :members:


RemotePythonObject.DefinedRemotePythonObject
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.. autoclass:: pyfora.RemotePythonObject.DefinedRemotePythonObject
    :members:


RemotePythonObject.ComputedRemotePythonObject
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.. autoclass:: pyfora.RemotePythonObject.ComputedRemotePythonObject
    :members:


Future
------
.. autoclass:: pyfora.Future.Future
   :show-inheritance:
   :members: cancel


Algorithms
----------

Linear Regression
~~~~~~~~~~~~~~~~~
.. autofunction:: pyfora.algorithms.linearRegression

Logistic Regression
~~~~~~~~~~~~~~~~~~~
.. autoclass:: pyfora.algorithms.BinaryLogisticRegressionFitter
   :members: fit
.. autoclass:: pyfora.algorithms.logistic.BinaryLogisticRegressionModel.BinaryLogisticRegressionModel
    :members:

Regression Trees
~~~~~~~~~~~~~~~~
.. autoclass:: pyfora.algorithms.regressionTrees.RegressionTree.RegressionTreeBuilder
  :members:
.. autoclass:: pyfora.algorithms.regressionTrees.RegressionTree.RegressionTree
  :members:

Gradient Boosting
~~~~~~~~~~~~~~~~~
.. autoclass:: pyfora.algorithms.regressionTrees.GradientBoostedRegressorBuilder.GradientBoostedRegressorBuilder
  :members:
.. autoclass:: pyfora.algorithms.regressionTrees.RegressionModel.RegressionModel
  :members:
.. autoclass:: pyfora.algorithms.regressionTrees.GradientBoostedRegressorBuilder.IterativeFitter
  :members:
.. autoclass:: pyfora.algorithms.regressionTrees.GradientBoostedClassifierBuilder.GradientBoostedClassifierBuilder
  :members:
.. autoclass:: pyfora.algorithms.regressionTrees.BinaryClassificationModel.BinaryClassificationModel
  :members:
.. autoclass:: pyfora.algorithms.regressionTrees.GradientBoostedClassifierBuilder.IterativeFitter
  :members:

Data Frames
-----------
.. autofunction:: pyfora.pandas_util.read_csv_from_string
