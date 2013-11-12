#!/bin/sh

ABSPATH=$(cd "$(dirname "$0")"; pwd)

# only one single file in sqlite amalgamation version
FNAME=sqlite3.c

# set output files
outBase="$(dirname $FNAME)/$(basename $FNAME .c)"
outDbg="$outBase.dbg"
outPartialPreproc="$outBase.pi"
outErr="$outBase.err"
outTime="$outBase.time"


../../TypeChef/typechef.sh \
	--bdd \
	-I /usr/local/include \
	-I /usr/lib/gcc/x86_64-linux-gnu/4.6/include-fixed \
	-I /usr/lib/gcc/x86_64-linux-gnu/4.6/include \
	-I /usr/include/x86_64-linux-gnu \
	-I /usr/include \
	--platfromHeader $ABSPATH/platform.h \
	--openFeat $ABSPATH/openfeatures.txt \
	--featureModelFExpr $ABSPATH/fm.txt \
	--typeSystemFeatureModelDimacs $ABSPATH/sqlite.dimacs \
	--include $ABSPATH/partial_configuration.h \
	--parserstatistics \
	--writePI \
	--dumpcfg \
	$FNAME \
	2> "$outErr" | tee "$outDbg"

cat $outErr

