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
#include <string>
#include "../lassert.hpp"
#include "IProtocol.hpp"
#include <stdio.h>

class IFileProtocol : public IProtocol {
public:
	IFileProtocol(FILE* inFile) : mFile(inFile)
		{
		mPosition = 0;
		}

	IFileProtocol(const IFileProtocol& in) = delete;
	IFileProtocol& operator=(const IFileProtocol& in) = delete;

	uword_t read(uword_t inByteCount, void *inData, bool inBlock)
		{
		uword_t bytesRead = ::fread(inData, 1, inByteCount, mFile);

		mPosition += bytesRead;

		return bytesRead;
		}

	uword_t position(void)
		{
		return mPosition;
		}
private:
	FILE*		mFile;
	uword_t 	mPosition;
};

