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
#include <stdint.h>
#include <boost/python.hpp>
#include "Channel.hpp"
#include "SocketStringChannel.hpp"

#include <stdint.h>
#include <boost/python.hpp>
#include "../native/Registrar.hpp"
#include "../core/python/CPPMLWrapper.hpp"
#include "../core/python/ScopedPyThreads.hpp"

class SocketStringChannelWrapper :
	public native::module::Exporter<SocketStringChannelWrapper> {
public:
	std::string		getModuleName(void)
		{
		return "SocketStringChannel";
		}

	static boost::python::object makeSocketStringChannel(
			PolymorphicSharedPtr<CallbackScheduler> inCallbackScheduler,
			int32_t inFileDescriptor
			)
		{
		return boost::python::object(
			PolymorphicSharedPtr<Channel<std::string, std::string> >(
				new SocketStringChannel(inCallbackScheduler, inFileDescriptor)
				)
			);
		}

	void exportPythonWrapper()
		{
		using namespace boost::python;

		def("SocketStringChannel", makeSocketStringChannel);
		}
};

//explicitly instantiating the registration element causes the linker to need
//this file
template<>
char native::module::Exporter<SocketStringChannelWrapper>::mEnforceRegistration =
				native::module::ExportRegistrar<SocketStringChannelWrapper>::registerWrapper();


