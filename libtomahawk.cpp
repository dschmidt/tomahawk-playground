#include "libtomahawk.h"

#include "databasecommand_addfiles.h"

libtomahawk::libtomahawk()
{
        (new DatabaseCommand_Addfiles)->narf();
}