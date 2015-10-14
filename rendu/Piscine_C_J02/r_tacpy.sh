rev | sort -r | cut -d : -f 7 | sed $MY_LINE1,$MY_LINE2!d | sort -r | sed "s/$/,/" | tr [:space:] ' ' | sed "s/, $/./"
