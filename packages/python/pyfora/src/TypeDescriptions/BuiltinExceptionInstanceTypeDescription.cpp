/***************************************************************************
   Copyright 2016 Ufora Inc.

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
#include "../IRToPythonConverter.hpp"
#include "../core/PyObjectPtr.hpp"
#include "BuiltinExceptionInstanceTypeDescription.hpp"


BuiltinExceptionInstanceTypeDescription::BuiltinExceptionInstanceTypeDescription(
        const std::string& typeName,
        int64_t argsId
        ) :
        mTypeName(typeName),
        mArgsId(argsId)
    {
    }


PyObject* BuiltinExceptionInstanceTypeDescription::transform(
        IRToPythonConverter& converter,
        bool retainHomogenousListsAsNumpy
        )
    {
    PyObjectPtr builtinExceptionType = PyObjectPtr::unincremented(
        converter.singletonNameToObject(mTypeName));
    if (builtinExceptionType == nullptr) {
        return nullptr;
        }
    
    PyObjectPtr args = PyObjectPtr::unincremented(converter.convert(mArgsId));
    if (args == nullptr) {
        return nullptr;
        }

    return PyObject_Call(
        builtinExceptionType.get(),
        args.get(),
        nullptr);
    }
