#!/bin/sh
ifconfig -a | grep "ether " | sed 's/ether //g' | tr -d "\t "
