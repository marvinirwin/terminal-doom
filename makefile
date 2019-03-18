EXTENSION = doom        # the extensions name
DATA = doom--0.0.1.sql  # script files to install
REGRESS = doom_test     # our test script file (without extension)
MODULES = doom          # our c module file to build

# postgres build stuff
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)

