#!/bin/sh

cat /etc/passwd | grep -v ^\# | sed g\;n | cut -f1 -d ':' | sed '/^$/d' | rev | sort -r | awk -v FT_LINE1=$FT_LINE1 -v FT_LINE2=$FT_LINE2 'NR>=FT_LINE1 && NR<=FT_LINE2 {print}' | sed '$!s/$/,/g' | tr "\n " " " | sed 's/$/./'
