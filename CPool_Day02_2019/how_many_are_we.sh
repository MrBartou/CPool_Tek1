#!/bin/sh
cut -d ";" -f 3  |tr [A-Z] [a-z]|grep -c "$1"
