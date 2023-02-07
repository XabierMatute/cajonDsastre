#!/bin/bash

# header="minishell.h"
# prototipo="$1"
# nombre=$(echo $prototipo | sed -ne "s/[^ ]* \([^(]*\).*/\1/p" )

# CREAR .C
# vim -c "Stdheader" -c "source " -c "wq" $nombre.c
# sed -i "" "13d" $nombre.c
# echo "#include "../$header"" >> $nombre.c
# echo "" >> $nombre.c
# echo "$prototipo" >> $nombre.c
# echo "{" >> $nombre.c
# echo "	" >> $nombre.c
# echo "}" >> $nombre.c

#incluir en .h
# gsed -i "/#endif/i\
# $prototipo;" ../$header
# backslash="\\"
# idk="$nombre.c"
# idk="${idk}$backslash"

# tmp="$(basename $0).tmp"

#incluir en el Makefile
# echo "		$nombre.c	\\" > $tmp
# gsed -i "/SRC :=/r $tmp" ../Makefile
# rm $tmp

#hacer commit
git status
# 

# git commit -m "$nombre creado"
# git commit --amend
# git push
git status