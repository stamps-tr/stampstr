#!/bin/bash

_RNUM=$(( (RANDOM %10) + 1 ))

_JSON=$(/usr/local/bin/jq -c -n --argjson rnum $_RNUM '{version: "1.1", host: "deviceX", short_message: "device description", _value: $rnum}')

echo -n $_JSON | /usr/local/bin/kafkacat -b stampsnet.hashtagsource.com -t us100
