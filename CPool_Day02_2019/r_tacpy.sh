#!/bin/sh

export MY_LINE1='0'
export MY_LINE2='1'

grep 'etna' Day02/passwd | awk 'NR % 2 == 0 {print $0}' | cut -d':' -f1 | rev | tac | sed -n "$MY_LINE1, $MY_LINE2 p" | tr '\n' ',' | sed 's/.$/.\n/g'

