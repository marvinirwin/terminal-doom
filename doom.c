// cd /Applications/Postgres.app/Contents/Versions/11/share/postgresql/extension
#include "postgres.h"
#include "fmgr.h"
#include "utils/builtins.h"

PG_MODULE_MAGIC;

PG_FUNCTION_INFO_V1(doom);
Datum
doom(PG_FUNCTION_ARGS)
{
    char icecream[] = "doom-icecream";
    PG_RETURN_TEXT_P(cstring_to_text(icecream));
}


