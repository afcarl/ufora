/***************************************************************************
   Copyright 2015 Ufora Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
****************************************************************************/
#include "FunctionStage1.hppml"

#include "../python/FORAPythonUtil.hppml"
#include <boost/python.hpp>
#include "../../native/Registrar.hpp"
#include "../../core/python/CPPMLWrapper.hpp"
#include "FunctionStage1.hppml"

class FunctionStage1Wrapper :
		public native::module::Exporter<FunctionStage1Wrapper> {
public:
		std::string	     getModuleName(void)
			{
			return "FORA";
			}

		void exportPythonWrapper()
			{
			using namespace boost::python;

			FORAPythonUtil::exposeValueLikeCppmlType<FunctionStage1::Function>();
			FORAPythonUtil::exposeValueLikeCppmlType<FunctionStage1::Expression>();
			}
};

//explicitly instantiating the registration element causes the linker to need
//this file
template<>
char native::module::Exporter<FunctionStage1Wrapper>::mEnforceRegistration =
		native::module::ExportRegistrar<
			FunctionStage1Wrapper>::registerWrapper();






