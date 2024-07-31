#!/bin/bash
export FT_LINE1=2
export FT_LINE2=4
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | awk -F: '{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p"
