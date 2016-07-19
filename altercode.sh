#!/usr/bin/env bash

cheeseburgers=$(basename `pwd`)


if [[ ${cheeseburgers} = "github-network-testing" ]] ; then
	echo You\'re in the right spot homie.
else
	echo You\'re in the wrong place, why are you here and not in your repo\?

fi


for hungry in `find . -type f -name '*.h' -print `
do
 date >> ${hungry}
done

echo "Files altered. Use git to commit and push them"


##   
##   
##   JessieiMac:github-network-testing jbryan$ time ./altercode.sh
##   You're in the right spot homie.
##   Files altered. Use git to commit and push them
##   
##   real	21m55.853s
##   user	5m40.622s
##   sys	13m13.990s
##   
##   
