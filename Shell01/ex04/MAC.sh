#!/bin/sh
ifconfig | g-wrep  "ether" | cut -d ' ' -f2
