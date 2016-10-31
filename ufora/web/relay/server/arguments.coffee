#   Copyright 2015 Ufora Inc.
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

argparser = require('argparse').ArgumentParser

create_parser = (version) ->
    parser = new argparser
        version: version
        addHelp: true
        description: 'Starts the FORA communication relay'

    parser.addArgument ['--port'],
        help: 'The HTTP port to listen on.'
        type: 'int'
        defaultValue: 30000

    parser.addArgument ['--hostname'],
        help: 'The host name used to access the relay'
        defaultValue: 'localhost'

    parser.addArgument ['--gatewayhost'],
        help: 'Ufora Gateway Service host name or address'
        defaultValue: 'localhost'

    parser.addArgument ['--gatewayport'],
        help: 'Ufora Gateway Service port'
        type: 'int'
        defaultValue: 30008

    parser


module.exports = (version) ->
    config = create_parser(version).parseArgs()
    config.version = version
    return config


