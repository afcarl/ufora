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

#include <vector>
#include <deque>
#include "../Common.hppml"
#include "Common.hpp"
#include "OProtocol.hpp"

class OMemProtocol : public OProtocol {
public:
	OMemProtocol(const OMemProtocol& in) = delete;
	OMemProtocol& operator=(const OMemProtocol& in) = delete;
	OMemProtocol(std::vector<char>& inData);

	void write(uword_t inByteCount, const void* inData);

	uword_t position(void)
		{
		return mData.size();
		}
private:
	std::vector<char>& mData;
};


