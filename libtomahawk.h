#ifdef BUILD_LIBTOMAHAWK
#define LTEXPORT __declspec(dllexport)
#else
#define LTEXPORT __declspec(dllimport)
#endif

class LTEXPORT libtomahawk
{
public:
    libtomahawk();
};
