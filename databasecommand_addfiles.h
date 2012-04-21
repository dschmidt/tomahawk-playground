
#ifdef BUILD_DATABASE
#define DBEXPORT __declspec(dllexport)
#else
#define DBEXPORT __declspec(dllimport)
#endif

class DBEXPORT DatabaseCommand_Addfiles
{
public:
    DatabaseCommand_Addfiles();

    void narf();
};
