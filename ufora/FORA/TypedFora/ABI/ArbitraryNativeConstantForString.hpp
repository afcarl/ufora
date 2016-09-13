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
#pragma once

#include "../../Native/NativeCode.hppml"
#include "../../Native/ArbitraryNativeConstant.hpp"

namespace TypedFora {
namespace Abi {

class ArbitraryNativeConstantForStringType;

class ArbitraryNativeConstantForString : public ArbitraryNativeConstant {
public:
	ArbitraryNativeConstantForString(const std::string& inValue);

	ArbitraryNativeConstantType* type();

	NativeType nativeType();

	void* pointerToData();

	std::string description();

	hash_type hash();

	static NativeExpression expressionForString(const std::string& in);

	std::string getString() const
		{
		return mValue;
		}

private:
	friend class ArbitraryNativeConstantForStringType;

	std::string mValue;

	const char* mValuePtr;
};

}
}
